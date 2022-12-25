// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: file_upload.proto

package ca.wise.comms.client.proto;

/**
 * <pre>
 **
 * A request from W.I.S.E. Manager to stream a file
 * to anyone who wants it.
 * </pre>
 *
 * Protobuf type {@code WISE.Comms.ClientProto.FileStreamRequest}
 */
public final class FileStreamRequest extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:WISE.Comms.ClientProto.FileStreamRequest)
    FileStreamRequestOrBuilder {
private static final long serialVersionUID = 0L;
  // Use FileStreamRequest.newBuilder() to construct.
  private FileStreamRequest(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private FileStreamRequest() {
    job_ = "";
    filename_ = "";
  }

  @java.lang.Override
  @SuppressWarnings({"unused"})
  protected java.lang.Object newInstance(
      UnusedPrivateParameter unused) {
    return new FileStreamRequest();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private FileStreamRequest(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          case 10: {
            java.lang.String s = input.readStringRequireUtf8();

            job_ = s;
            break;
          }
          case 18: {
            java.lang.String s = input.readStringRequireUtf8();

            filename_ = s;
            break;
          }
          case 24: {

            fileSize_ = input.readInt64();
            break;
          }
          case 32: {

            wasSkipped_ = input.readBool();
            break;
          }
          default: {
            if (!parseUnknownField(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return ca.wise.comms.client.proto.FileUpload.internal_static_WISE_Comms_ClientProto_FileStreamRequest_descriptor;
  }

  @java.lang.Override
  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return ca.wise.comms.client.proto.FileUpload.internal_static_WISE_Comms_ClientProto_FileStreamRequest_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            ca.wise.comms.client.proto.FileStreamRequest.class, ca.wise.comms.client.proto.FileStreamRequest.Builder.class);
  }

  public static final int JOB_FIELD_NUMBER = 1;
  private volatile java.lang.Object job_;
  /**
   * <pre>
   *The unique identifier for the job
   * </pre>
   *
   * <code>string job = 1;</code>
   * @return The job.
   */
  @java.lang.Override
  public java.lang.String getJob() {
    java.lang.Object ref = job_;
    if (ref instanceof java.lang.String) {
      return (java.lang.String) ref;
    } else {
      com.google.protobuf.ByteString bs = 
          (com.google.protobuf.ByteString) ref;
      java.lang.String s = bs.toStringUtf8();
      job_ = s;
      return s;
    }
  }
  /**
   * <pre>
   *The unique identifier for the job
   * </pre>
   *
   * <code>string job = 1;</code>
   * @return The bytes for job.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getJobBytes() {
    java.lang.Object ref = job_;
    if (ref instanceof java.lang.String) {
      com.google.protobuf.ByteString b = 
          com.google.protobuf.ByteString.copyFromUtf8(
              (java.lang.String) ref);
      job_ = b;
      return b;
    } else {
      return (com.google.protobuf.ByteString) ref;
    }
  }

  public static final int FILENAME_FIELD_NUMBER = 2;
  private volatile java.lang.Object filename_;
  /**
   * <pre>
   *The name of the file including any relative paths within the job directory
   * </pre>
   *
   * <code>string filename = 2;</code>
   * @return The filename.
   */
  @java.lang.Override
  public java.lang.String getFilename() {
    java.lang.Object ref = filename_;
    if (ref instanceof java.lang.String) {
      return (java.lang.String) ref;
    } else {
      com.google.protobuf.ByteString bs = 
          (com.google.protobuf.ByteString) ref;
      java.lang.String s = bs.toStringUtf8();
      filename_ = s;
      return s;
    }
  }
  /**
   * <pre>
   *The name of the file including any relative paths within the job directory
   * </pre>
   *
   * <code>string filename = 2;</code>
   * @return The bytes for filename.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getFilenameBytes() {
    java.lang.Object ref = filename_;
    if (ref instanceof java.lang.String) {
      com.google.protobuf.ByteString b = 
          com.google.protobuf.ByteString.copyFromUtf8(
              (java.lang.String) ref);
      filename_ = b;
      return b;
    } else {
      return (com.google.protobuf.ByteString) ref;
    }
  }

  public static final int FILE_SIZE_FIELD_NUMBER = 3;
  private long fileSize_;
  /**
   * <pre>
   *The size of the file in bytes
   * </pre>
   *
   * <code>int64 file_size = 3;</code>
   * @return The fileSize.
   */
  @java.lang.Override
  public long getFileSize() {
    return fileSize_;
  }

  public static final int WAS_SKIPPED_FIELD_NUMBER = 4;
  private boolean wasSkipped_;
  /**
   * <pre>
   *The file output occurred but the file was empty, so the actual write was skipped (no file exists for the write request)
   * </pre>
   *
   * <code>bool was_skipped = 4;</code>
   * @return The wasSkipped.
   */
  @java.lang.Override
  public boolean getWasSkipped() {
    return wasSkipped_;
  }

  private byte memoizedIsInitialized = -1;
  @java.lang.Override
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  @java.lang.Override
  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    if (!getJobBytes().isEmpty()) {
      com.google.protobuf.GeneratedMessageV3.writeString(output, 1, job_);
    }
    if (!getFilenameBytes().isEmpty()) {
      com.google.protobuf.GeneratedMessageV3.writeString(output, 2, filename_);
    }
    if (fileSize_ != 0L) {
      output.writeInt64(3, fileSize_);
    }
    if (wasSkipped_ != false) {
      output.writeBool(4, wasSkipped_);
    }
    unknownFields.writeTo(output);
  }

  @java.lang.Override
  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (!getJobBytes().isEmpty()) {
      size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, job_);
    }
    if (!getFilenameBytes().isEmpty()) {
      size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, filename_);
    }
    if (fileSize_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt64Size(3, fileSize_);
    }
    if (wasSkipped_ != false) {
      size += com.google.protobuf.CodedOutputStream
        .computeBoolSize(4, wasSkipped_);
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof ca.wise.comms.client.proto.FileStreamRequest)) {
      return super.equals(obj);
    }
    ca.wise.comms.client.proto.FileStreamRequest other = (ca.wise.comms.client.proto.FileStreamRequest) obj;

    if (!getJob()
        .equals(other.getJob())) return false;
    if (!getFilename()
        .equals(other.getFilename())) return false;
    if (getFileSize()
        != other.getFileSize()) return false;
    if (getWasSkipped()
        != other.getWasSkipped()) return false;
    if (!unknownFields.equals(other.unknownFields)) return false;
    return true;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + JOB_FIELD_NUMBER;
    hash = (53 * hash) + getJob().hashCode();
    hash = (37 * hash) + FILENAME_FIELD_NUMBER;
    hash = (53 * hash) + getFilename().hashCode();
    hash = (37 * hash) + FILE_SIZE_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getFileSize());
    hash = (37 * hash) + WAS_SKIPPED_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashBoolean(
        getWasSkipped());
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static ca.wise.comms.client.proto.FileStreamRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  @java.lang.Override
  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(ca.wise.comms.client.proto.FileStreamRequest prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  @java.lang.Override
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * <pre>
   **
   * A request from W.I.S.E. Manager to stream a file
   * to anyone who wants it.
   * </pre>
   *
   * Protobuf type {@code WISE.Comms.ClientProto.FileStreamRequest}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:WISE.Comms.ClientProto.FileStreamRequest)
      ca.wise.comms.client.proto.FileStreamRequestOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return ca.wise.comms.client.proto.FileUpload.internal_static_WISE_Comms_ClientProto_FileStreamRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return ca.wise.comms.client.proto.FileUpload.internal_static_WISE_Comms_ClientProto_FileStreamRequest_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              ca.wise.comms.client.proto.FileStreamRequest.class, ca.wise.comms.client.proto.FileStreamRequest.Builder.class);
    }

    // Construct using ca.wise.comms.client.proto.FileStreamRequest.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
      }
    }
    @java.lang.Override
    public Builder clear() {
      super.clear();
      job_ = "";

      filename_ = "";

      fileSize_ = 0L;

      wasSkipped_ = false;

      return this;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return ca.wise.comms.client.proto.FileUpload.internal_static_WISE_Comms_ClientProto_FileStreamRequest_descriptor;
    }

    @java.lang.Override
    public ca.wise.comms.client.proto.FileStreamRequest getDefaultInstanceForType() {
      return ca.wise.comms.client.proto.FileStreamRequest.getDefaultInstance();
    }

    @java.lang.Override
    public ca.wise.comms.client.proto.FileStreamRequest build() {
      ca.wise.comms.client.proto.FileStreamRequest result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    @java.lang.Override
    public ca.wise.comms.client.proto.FileStreamRequest buildPartial() {
      ca.wise.comms.client.proto.FileStreamRequest result = new ca.wise.comms.client.proto.FileStreamRequest(this);
      result.job_ = job_;
      result.filename_ = filename_;
      result.fileSize_ = fileSize_;
      result.wasSkipped_ = wasSkipped_;
      onBuilt();
      return result;
    }

    @java.lang.Override
    public Builder clone() {
      return super.clone();
    }
    @java.lang.Override
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.setField(field, value);
    }
    @java.lang.Override
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return super.clearField(field);
    }
    @java.lang.Override
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return super.clearOneof(oneof);
    }
    @java.lang.Override
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return super.setRepeatedField(field, index, value);
    }
    @java.lang.Override
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.addRepeatedField(field, value);
    }
    @java.lang.Override
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof ca.wise.comms.client.proto.FileStreamRequest) {
        return mergeFrom((ca.wise.comms.client.proto.FileStreamRequest)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(ca.wise.comms.client.proto.FileStreamRequest other) {
      if (other == ca.wise.comms.client.proto.FileStreamRequest.getDefaultInstance()) return this;
      if (!other.getJob().isEmpty()) {
        job_ = other.job_;
        onChanged();
      }
      if (!other.getFilename().isEmpty()) {
        filename_ = other.filename_;
        onChanged();
      }
      if (other.getFileSize() != 0L) {
        setFileSize(other.getFileSize());
      }
      if (other.getWasSkipped() != false) {
        setWasSkipped(other.getWasSkipped());
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    @java.lang.Override
    public final boolean isInitialized() {
      return true;
    }

    @java.lang.Override
    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      ca.wise.comms.client.proto.FileStreamRequest parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (ca.wise.comms.client.proto.FileStreamRequest) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }

    private java.lang.Object job_ = "";
    /**
     * <pre>
     *The unique identifier for the job
     * </pre>
     *
     * <code>string job = 1;</code>
     * @return The job.
     */
    public java.lang.String getJob() {
      java.lang.Object ref = job_;
      if (!(ref instanceof java.lang.String)) {
        com.google.protobuf.ByteString bs =
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        job_ = s;
        return s;
      } else {
        return (java.lang.String) ref;
      }
    }
    /**
     * <pre>
     *The unique identifier for the job
     * </pre>
     *
     * <code>string job = 1;</code>
     * @return The bytes for job.
     */
    public com.google.protobuf.ByteString
        getJobBytes() {
      java.lang.Object ref = job_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        job_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    /**
     * <pre>
     *The unique identifier for the job
     * </pre>
     *
     * <code>string job = 1;</code>
     * @param value The job to set.
     * @return This builder for chaining.
     */
    public Builder setJob(
        java.lang.String value) {
      if (value == null) {
    throw new NullPointerException();
  }
  
      job_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     *The unique identifier for the job
     * </pre>
     *
     * <code>string job = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearJob() {
      
      job_ = getDefaultInstance().getJob();
      onChanged();
      return this;
    }
    /**
     * <pre>
     *The unique identifier for the job
     * </pre>
     *
     * <code>string job = 1;</code>
     * @param value The bytes for job to set.
     * @return This builder for chaining.
     */
    public Builder setJobBytes(
        com.google.protobuf.ByteString value) {
      if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
      
      job_ = value;
      onChanged();
      return this;
    }

    private java.lang.Object filename_ = "";
    /**
     * <pre>
     *The name of the file including any relative paths within the job directory
     * </pre>
     *
     * <code>string filename = 2;</code>
     * @return The filename.
     */
    public java.lang.String getFilename() {
      java.lang.Object ref = filename_;
      if (!(ref instanceof java.lang.String)) {
        com.google.protobuf.ByteString bs =
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        filename_ = s;
        return s;
      } else {
        return (java.lang.String) ref;
      }
    }
    /**
     * <pre>
     *The name of the file including any relative paths within the job directory
     * </pre>
     *
     * <code>string filename = 2;</code>
     * @return The bytes for filename.
     */
    public com.google.protobuf.ByteString
        getFilenameBytes() {
      java.lang.Object ref = filename_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        filename_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    /**
     * <pre>
     *The name of the file including any relative paths within the job directory
     * </pre>
     *
     * <code>string filename = 2;</code>
     * @param value The filename to set.
     * @return This builder for chaining.
     */
    public Builder setFilename(
        java.lang.String value) {
      if (value == null) {
    throw new NullPointerException();
  }
  
      filename_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     *The name of the file including any relative paths within the job directory
     * </pre>
     *
     * <code>string filename = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearFilename() {
      
      filename_ = getDefaultInstance().getFilename();
      onChanged();
      return this;
    }
    /**
     * <pre>
     *The name of the file including any relative paths within the job directory
     * </pre>
     *
     * <code>string filename = 2;</code>
     * @param value The bytes for filename to set.
     * @return This builder for chaining.
     */
    public Builder setFilenameBytes(
        com.google.protobuf.ByteString value) {
      if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
      
      filename_ = value;
      onChanged();
      return this;
    }

    private long fileSize_ ;
    /**
     * <pre>
     *The size of the file in bytes
     * </pre>
     *
     * <code>int64 file_size = 3;</code>
     * @return The fileSize.
     */
    @java.lang.Override
    public long getFileSize() {
      return fileSize_;
    }
    /**
     * <pre>
     *The size of the file in bytes
     * </pre>
     *
     * <code>int64 file_size = 3;</code>
     * @param value The fileSize to set.
     * @return This builder for chaining.
     */
    public Builder setFileSize(long value) {
      
      fileSize_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     *The size of the file in bytes
     * </pre>
     *
     * <code>int64 file_size = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearFileSize() {
      
      fileSize_ = 0L;
      onChanged();
      return this;
    }

    private boolean wasSkipped_ ;
    /**
     * <pre>
     *The file output occurred but the file was empty, so the actual write was skipped (no file exists for the write request)
     * </pre>
     *
     * <code>bool was_skipped = 4;</code>
     * @return The wasSkipped.
     */
    @java.lang.Override
    public boolean getWasSkipped() {
      return wasSkipped_;
    }
    /**
     * <pre>
     *The file output occurred but the file was empty, so the actual write was skipped (no file exists for the write request)
     * </pre>
     *
     * <code>bool was_skipped = 4;</code>
     * @param value The wasSkipped to set.
     * @return This builder for chaining.
     */
    public Builder setWasSkipped(boolean value) {
      
      wasSkipped_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     *The file output occurred but the file was empty, so the actual write was skipped (no file exists for the write request)
     * </pre>
     *
     * <code>bool was_skipped = 4;</code>
     * @return This builder for chaining.
     */
    public Builder clearWasSkipped() {
      
      wasSkipped_ = false;
      onChanged();
      return this;
    }
    @java.lang.Override
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFields(unknownFields);
    }

    @java.lang.Override
    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:WISE.Comms.ClientProto.FileStreamRequest)
  }

  // @@protoc_insertion_point(class_scope:WISE.Comms.ClientProto.FileStreamRequest)
  private static final ca.wise.comms.client.proto.FileStreamRequest DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new ca.wise.comms.client.proto.FileStreamRequest();
  }

  public static ca.wise.comms.client.proto.FileStreamRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<FileStreamRequest>
      PARSER = new com.google.protobuf.AbstractParser<FileStreamRequest>() {
    @java.lang.Override
    public FileStreamRequest parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return new FileStreamRequest(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<FileStreamRequest> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<FileStreamRequest> getParserForType() {
    return PARSER;
  }

  @java.lang.Override
  public ca.wise.comms.client.proto.FileStreamRequest getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

