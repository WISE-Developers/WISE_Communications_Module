/**
 * WISE_Grid_Module: ProtoStatus.h
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

#pragma once

#ifdef _MANAGED
namespace CWFGM {
	namespace StatusProto {
		class jobStatus;
		class jobStatus_statusType;
	}
}
#else
#include "status.pb.h"
#endif

#include <string>


namespace ProtoStatus
{
	class StatusUpdater
	{
	public:
		StatusUpdater(const std::string& jobPath);
		~StatusUpdater();

		void updateStatus(WISE::StatusProto::jobStatus_statusType sts, const std::string& msg);

	private:
		std::string buildStatus(const WISE::StatusProto::jobStatus_statusEntry& entry);
		std::string buildInformation(const google::protobuf::Timestamp& time, const std::string& data);
		std::string buildUpdate(const google::protobuf::Timestamp& time, std::int32_t status);
		std::string buildUpdate(const google::protobuf::Timestamp& time, std::int32_t status, const std::string& data);

		std::uint32_t m_statusCount{ 0 };
		std::mutex m_serial;
		std::string m_path;
		std::ofstream out;
	};
}
