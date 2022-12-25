// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: file_upload.proto

package ca.wise.comms.client.proto;

public interface FileStreamRequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:WISE.Comms.ClientProto.FileStreamRequest)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   *The unique identifier for the job
   * </pre>
   *
   * <code>string job = 1;</code>
   * @return The job.
   */
  java.lang.String getJob();
  /**
   * <pre>
   *The unique identifier for the job
   * </pre>
   *
   * <code>string job = 1;</code>
   * @return The bytes for job.
   */
  com.google.protobuf.ByteString
      getJobBytes();

  /**
   * <pre>
   *The name of the file including any relative paths within the job directory
   * </pre>
   *
   * <code>string filename = 2;</code>
   * @return The filename.
   */
  java.lang.String getFilename();
  /**
   * <pre>
   *The name of the file including any relative paths within the job directory
   * </pre>
   *
   * <code>string filename = 2;</code>
   * @return The bytes for filename.
   */
  com.google.protobuf.ByteString
      getFilenameBytes();

  /**
   * <pre>
   *The size of the file in bytes
   * </pre>
   *
   * <code>int64 file_size = 3;</code>
   * @return The fileSize.
   */
  long getFileSize();

  /**
   * <pre>
   *The file output occurred but the file was empty, so the actual write was skipped (no file exists for the write request)
   * </pre>
   *
   * <code>bool was_skipped = 4;</code>
   * @return The wasSkipped.
   */
  boolean getWasSkipped();
}
