/**
 * WISE_Grid_Module: ProtoStatus.cpp
 * Copyright (C) 2023  WISE
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "types.h"
#include <fstream>
#include "ProtoStatus.h"

#include <chrono>
#include <fstream>
#include <google/protobuf/util/json_util.h>
#include <google/protobuf/util/time_util.h>
#include <boost/format.hpp>

HSS_PRAGMA_MANAGED_OFF
#include <functional>
#include "filesystem.hpp"


#ifdef _MSC_VER
#define SEEK_OFFSET_REWRITE -6
#else
#define SEEK_OFFSET_REWRITE -4
#endif


ProtoStatus::StatusUpdater::StatusUpdater(const std::string& jobPath)
{
	fs::path path(jobPath);
	path = path / "status.json";
	m_path = path.string();
	std::string m_status = "{\n  \"entries\": [";

	if (fs::exists(path))
	{
		std::ifstream in(path.string());
		if (in.is_open())
		{
			google::protobuf::util::JsonParseOptions options;
			options.ignore_unknown_fields = true;

			WISE::StatusProto::jobStatus status;
			std::string json((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
			google::protobuf::util::JsonStringToMessage(json, &status, options);

			for (auto& entry : status.entries())
			{
				if (m_statusCount)
					m_status += ",\n  " + buildStatus(entry);
				else
					m_status += buildStatus(entry);
				m_statusCount++;
			}
			in.close();
		}
	}

	out.open(m_path);
	if (out.is_open()) {
		out << m_status << "]\n}" << std::endl;
	}
}


ProtoStatus::StatusUpdater::~StatusUpdater() { }


std::string ProtoStatus::StatusUpdater::buildInformation(const google::protobuf::Timestamp& time, const std::string& data)
{
	std::string tm = google::protobuf::util::TimeUtil::ToString(time);
	return (boost::format("{\n    \"information\": {\n      \"time\": \"%s\",\n      \"data\": \"%s\"\n    }\n  }") % tm % data).str();
}


std::string ProtoStatus::StatusUpdater::buildUpdate(const google::protobuf::Timestamp& time, std::int32_t status)
{
	std::string tm = google::protobuf::util::TimeUtil::ToString(time);
	return (boost::format("{\n    \"status\": {\n      \"time\": \"%s\",\n      \"status\": %d\n    }\n  }") % tm % status).str();
}


std::string ProtoStatus::StatusUpdater::buildUpdate(const google::protobuf::Timestamp& time, std::int32_t status, const std::string& data)
{
	std::string tm = google::protobuf::util::TimeUtil::ToString(time);
	return (boost::format("{\n    \"status\": {\n      \"time\": \"%s\",\n      \"status\": %d,\n      \"data\": \"%s\"\n    }\n  }") % tm % status % data).str();
}


std::string ProtoStatus::StatusUpdater::buildStatus(const WISE::StatusProto::jobStatus_statusEntry& entry)
{
	std::string retval;
	if (entry.has_information())
		return buildInformation(entry.information().time(), entry.information().data());
	else if (entry.has_status())
	{
		if (entry.status().has_data())
			return buildUpdate(entry.status().time(), entry.status().status(), entry.status().data().value());
		else
			return buildUpdate(entry.status().time(), entry.status().status());
	}
	return retval;
}


void ProtoStatus::StatusUpdater::updateStatus(WISE::StatusProto::jobStatus_statusType sts, const std::string& msg)
{
	google::protobuf::Timestamp time = google::protobuf::util::TimeUtil::GetCurrentTime();
	std::string newJson = buildUpdate(time, sts, msg);

	std::string m_status;
	if (m_statusCount)
		m_status += ",\n  " + newJson;
	else
		m_status += newJson;
	m_statusCount++;

	std::lock_guard<std::mutex> lock(m_serial);

	if (out.is_open()) {
		out.seekp(SEEK_OFFSET_REWRITE, std::ios_base::end);
		out << m_status << "]\n}" << std::endl; // endl reportedly forces a flush
	}
}