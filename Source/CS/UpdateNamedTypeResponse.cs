// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: esriPBuffer/graph/UpdateNamedTypeResponse.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace EsriPBuffer.Graph {

  /// <summary>Holder for reflection information generated from esriPBuffer/graph/UpdateNamedTypeResponse.proto</summary>
  public static partial class UpdateNamedTypeResponseReflection {

    #region Descriptor
    /// <summary>File descriptor for esriPBuffer/graph/UpdateNamedTypeResponse.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static UpdateNamedTypeResponseReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ci9lc3JpUEJ1ZmZlci9ncmFwaC9VcGRhdGVOYW1lZFR5cGVSZXNwb25zZS5w",
            "cm90bxIRZXNyaVBCdWZmZXIuZ3JhcGgaJmVzcmlQQnVmZmVyL2dyYXBoL0Vz",
            "cmlHcmFwaFR5cGVzLnByb3RvIk0KIkdyYXBoTmFtZWRPYmplY3RUeXBlVXBk",
            "YXRlUmVzcG9uc2USJwoFZXJyb3IYASABKAsyGC5lc3JpUEJ1ZmZlci5ncmFw",
            "aC5FcnJvckIlCh5jb20uZXNyaS5hcmNnaXMucHJvdG9idWYuZ3JhcGhIA/gB",
            "AWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::EsriPBuffer.Graph.EsriGraphTypesReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::EsriPBuffer.Graph.GraphNamedObjectTypeUpdateResponse), global::EsriPBuffer.Graph.GraphNamedObjectTypeUpdateResponse.Parser, new[]{ "Error" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class GraphNamedObjectTypeUpdateResponse : pb::IMessage<GraphNamedObjectTypeUpdateResponse>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<GraphNamedObjectTypeUpdateResponse> _parser = new pb::MessageParser<GraphNamedObjectTypeUpdateResponse>(() => new GraphNamedObjectTypeUpdateResponse());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<GraphNamedObjectTypeUpdateResponse> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::EsriPBuffer.Graph.UpdateNamedTypeResponseReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GraphNamedObjectTypeUpdateResponse() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GraphNamedObjectTypeUpdateResponse(GraphNamedObjectTypeUpdateResponse other) : this() {
      error_ = other.error_ != null ? other.error_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GraphNamedObjectTypeUpdateResponse Clone() {
      return new GraphNamedObjectTypeUpdateResponse(this);
    }

    /// <summary>Field number for the "error" field.</summary>
    public const int ErrorFieldNumber = 1;
    private global::EsriPBuffer.Graph.Error error_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::EsriPBuffer.Graph.Error Error {
      get { return error_; }
      set {
        error_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as GraphNamedObjectTypeUpdateResponse);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(GraphNamedObjectTypeUpdateResponse other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Error, other.Error)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (error_ != null) hash ^= Error.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (error_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Error);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (error_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Error);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (error_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Error);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(GraphNamedObjectTypeUpdateResponse other) {
      if (other == null) {
        return;
      }
      if (other.error_ != null) {
        if (error_ == null) {
          Error = new global::EsriPBuffer.Graph.Error();
        }
        Error.MergeFrom(other.Error);
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            if (error_ == null) {
              Error = new global::EsriPBuffer.Graph.Error();
            }
            input.ReadMessage(Error);
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            if (error_ == null) {
              Error = new global::EsriPBuffer.Graph.Error();
            }
            input.ReadMessage(Error);
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
