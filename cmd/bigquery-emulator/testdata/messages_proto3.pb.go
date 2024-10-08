// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.1
// 	protoc        (unknown)
// source: messages_proto3.proto

package testdata

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	wrapperspb "google.golang.org/protobuf/types/known/wrapperspb"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// SimpleMessageProto3 represents a simple message that transmits a string and int64 value.
type SimpleMessageProto3 struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// name is a simple scalar string.
	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	// value is a simple int64 value.
	Value *wrapperspb.Int64Value `protobuf:"bytes,2,opt,name=value,proto3" json:"value,omitempty"`
}

func (x *SimpleMessageProto3) Reset() {
	*x = SimpleMessageProto3{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SimpleMessageProto3) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SimpleMessageProto3) ProtoMessage() {}

func (x *SimpleMessageProto3) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SimpleMessageProto3.ProtoReflect.Descriptor instead.
func (*SimpleMessageProto3) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{0}
}

func (x *SimpleMessageProto3) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *SimpleMessageProto3) GetValue() *wrapperspb.Int64Value {
	if x != nil {
		return x.Value
	}
	return nil
}

type SimpleMessageRequiredProto3 struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// name is a simple scalar string.
	Name  string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Value int64  `protobuf:"varint,2,opt,name=value,proto3" json:"value,omitempty"`
	// value is a simple int64 value.
	Other *wrapperspb.Int64Value `protobuf:"bytes,3,opt,name=other,proto3" json:"other,omitempty"`
}

func (x *SimpleMessageRequiredProto3) Reset() {
	*x = SimpleMessageRequiredProto3{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SimpleMessageRequiredProto3) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SimpleMessageRequiredProto3) ProtoMessage() {}

func (x *SimpleMessageRequiredProto3) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SimpleMessageRequiredProto3.ProtoReflect.Descriptor instead.
func (*SimpleMessageRequiredProto3) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{1}
}

func (x *SimpleMessageRequiredProto3) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *SimpleMessageRequiredProto3) GetValue() int64 {
	if x != nil {
		return x.Value
	}
	return 0
}

func (x *SimpleMessageRequiredProto3) GetOther() *wrapperspb.Int64Value {
	if x != nil {
		return x.Other
	}
	return nil
}

type SimpleMessageWithExtraFieldsProto3 struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// name is a simple scalar string.
	Name        string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	UnknownName string `protobuf:"bytes,2,opt,name=unknown_name,json=unknownName,proto3" json:"unknown_name,omitempty"`
	// value is a simple int64 value.
	Value *wrapperspb.Int64Value `protobuf:"bytes,3,opt,name=value,proto3" json:"value,omitempty"`
}

func (x *SimpleMessageWithExtraFieldsProto3) Reset() {
	*x = SimpleMessageWithExtraFieldsProto3{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SimpleMessageWithExtraFieldsProto3) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SimpleMessageWithExtraFieldsProto3) ProtoMessage() {}

func (x *SimpleMessageWithExtraFieldsProto3) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SimpleMessageWithExtraFieldsProto3.ProtoReflect.Descriptor instead.
func (*SimpleMessageWithExtraFieldsProto3) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{2}
}

func (x *SimpleMessageWithExtraFieldsProto3) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *SimpleMessageWithExtraFieldsProto3) GetUnknownName() string {
	if x != nil {
		return x.UnknownName
	}
	return ""
}

func (x *SimpleMessageWithExtraFieldsProto3) GetValue() *wrapperspb.Int64Value {
	if x != nil {
		return x.Value
	}
	return nil
}

type SimpleGithubMessageProto3 struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// name is a simple scalar string.
	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	// value is a simple int64 value.
	Value *wrapperspb.Int64Value   `protobuf:"bytes,2,opt,name=value,proto3" json:"value,omitempty"`
	Repo  *GithubArchiveRepoProto3 `protobuf:"bytes,3,opt,name=repo,proto3" json:"repo,omitempty"`
}

func (x *SimpleGithubMessageProto3) Reset() {
	*x = SimpleGithubMessageProto3{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SimpleGithubMessageProto3) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SimpleGithubMessageProto3) ProtoMessage() {}

func (x *SimpleGithubMessageProto3) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SimpleGithubMessageProto3.ProtoReflect.Descriptor instead.
func (*SimpleGithubMessageProto3) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{3}
}

func (x *SimpleGithubMessageProto3) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *SimpleGithubMessageProto3) GetValue() *wrapperspb.Int64Value {
	if x != nil {
		return x.Value
	}
	return nil
}

func (x *SimpleGithubMessageProto3) GetRepo() *GithubArchiveRepoProto3 {
	if x != nil {
		return x.Repo
	}
	return nil
}

type GithubArchiveEntityProto3 struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id         *wrapperspb.Int64Value  `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	Login      *wrapperspb.StringValue `protobuf:"bytes,2,opt,name=login,proto3" json:"login,omitempty"`
	GravatarId *wrapperspb.StringValue `protobuf:"bytes,3,opt,name=gravatar_id,json=gravatarId,proto3" json:"gravatar_id,omitempty"`
	AvatarUrl  *wrapperspb.StringValue `protobuf:"bytes,4,opt,name=avatar_url,json=avatarUrl,proto3" json:"avatar_url,omitempty"`
	Url        *wrapperspb.StringValue `protobuf:"bytes,5,opt,name=url,proto3" json:"url,omitempty"`
}

func (x *GithubArchiveEntityProto3) Reset() {
	*x = GithubArchiveEntityProto3{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GithubArchiveEntityProto3) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GithubArchiveEntityProto3) ProtoMessage() {}

func (x *GithubArchiveEntityProto3) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GithubArchiveEntityProto3.ProtoReflect.Descriptor instead.
func (*GithubArchiveEntityProto3) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{4}
}

func (x *GithubArchiveEntityProto3) GetId() *wrapperspb.Int64Value {
	if x != nil {
		return x.Id
	}
	return nil
}

func (x *GithubArchiveEntityProto3) GetLogin() *wrapperspb.StringValue {
	if x != nil {
		return x.Login
	}
	return nil
}

func (x *GithubArchiveEntityProto3) GetGravatarId() *wrapperspb.StringValue {
	if x != nil {
		return x.GravatarId
	}
	return nil
}

func (x *GithubArchiveEntityProto3) GetAvatarUrl() *wrapperspb.StringValue {
	if x != nil {
		return x.AvatarUrl
	}
	return nil
}

func (x *GithubArchiveEntityProto3) GetUrl() *wrapperspb.StringValue {
	if x != nil {
		return x.Url
	}
	return nil
}

type GithubArchiveRepoProto3 struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id   *wrapperspb.Int64Value  `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	Name *wrapperspb.StringValue `protobuf:"bytes,2,opt,name=name,proto3" json:"name,omitempty"`
	Url  *wrapperspb.StringValue `protobuf:"bytes,3,opt,name=url,proto3" json:"url,omitempty"`
}

func (x *GithubArchiveRepoProto3) Reset() {
	*x = GithubArchiveRepoProto3{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GithubArchiveRepoProto3) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GithubArchiveRepoProto3) ProtoMessage() {}

func (x *GithubArchiveRepoProto3) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GithubArchiveRepoProto3.ProtoReflect.Descriptor instead.
func (*GithubArchiveRepoProto3) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{5}
}

func (x *GithubArchiveRepoProto3) GetId() *wrapperspb.Int64Value {
	if x != nil {
		return x.Id
	}
	return nil
}

func (x *GithubArchiveRepoProto3) GetName() *wrapperspb.StringValue {
	if x != nil {
		return x.Name
	}
	return nil
}

func (x *GithubArchiveRepoProto3) GetUrl() *wrapperspb.StringValue {
	if x != nil {
		return x.Url
	}
	return nil
}

// GithubArchiveMessageProto3 is the proto3 version of github archive row.
type GithubArchiveMessageProto3 struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Type      *wrapperspb.StringValue    `protobuf:"bytes,1,opt,name=type,proto3" json:"type,omitempty"`
	Public    *wrapperspb.BoolValue      `protobuf:"bytes,2,opt,name=public,proto3" json:"public,omitempty"`
	Payload   *wrapperspb.StringValue    `protobuf:"bytes,3,opt,name=payload,proto3" json:"payload,omitempty"`
	Repo      *GithubArchiveRepoProto3   `protobuf:"bytes,4,opt,name=repo,proto3" json:"repo,omitempty"`
	Actor     *GithubArchiveEntityProto3 `protobuf:"bytes,5,opt,name=actor,proto3" json:"actor,omitempty"`
	Org       *GithubArchiveEntityProto3 `protobuf:"bytes,6,opt,name=org,proto3" json:"org,omitempty"`
	CreatedAt *wrapperspb.Int64Value     `protobuf:"bytes,7,opt,name=created_at,json=createdAt,proto3" json:"created_at,omitempty"`
	Id        *wrapperspb.StringValue    `protobuf:"bytes,8,opt,name=id,proto3" json:"id,omitempty"`
	Other     *wrapperspb.StringValue    `protobuf:"bytes,9,opt,name=other,proto3" json:"other,omitempty"`
}

func (x *GithubArchiveMessageProto3) Reset() {
	*x = GithubArchiveMessageProto3{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[6]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GithubArchiveMessageProto3) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GithubArchiveMessageProto3) ProtoMessage() {}

func (x *GithubArchiveMessageProto3) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[6]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GithubArchiveMessageProto3.ProtoReflect.Descriptor instead.
func (*GithubArchiveMessageProto3) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{6}
}

func (x *GithubArchiveMessageProto3) GetType() *wrapperspb.StringValue {
	if x != nil {
		return x.Type
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetPublic() *wrapperspb.BoolValue {
	if x != nil {
		return x.Public
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetPayload() *wrapperspb.StringValue {
	if x != nil {
		return x.Payload
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetRepo() *GithubArchiveRepoProto3 {
	if x != nil {
		return x.Repo
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetActor() *GithubArchiveEntityProto3 {
	if x != nil {
		return x.Actor
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetOrg() *GithubArchiveEntityProto3 {
	if x != nil {
		return x.Org
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetCreatedAt() *wrapperspb.Int64Value {
	if x != nil {
		return x.CreatedAt
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetId() *wrapperspb.StringValue {
	if x != nil {
		return x.Id
	}
	return nil
}

func (x *GithubArchiveMessageProto3) GetOther() *wrapperspb.StringValue {
	if x != nil {
		return x.Other
	}
	return nil
}

type SimpleMessageProto3WithOptional struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// name is a simple scalar string.
	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	// value is an int64 value with optional presence.
	Value *int64 `protobuf:"varint,2,opt,name=value,proto3,oneof" json:"value,omitempty"`
}

func (x *SimpleMessageProto3WithOptional) Reset() {
	*x = SimpleMessageProto3WithOptional{}
	if protoimpl.UnsafeEnabled {
		mi := &file_messages_proto3_proto_msgTypes[7]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SimpleMessageProto3WithOptional) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SimpleMessageProto3WithOptional) ProtoMessage() {}

func (x *SimpleMessageProto3WithOptional) ProtoReflect() protoreflect.Message {
	mi := &file_messages_proto3_proto_msgTypes[7]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SimpleMessageProto3WithOptional.ProtoReflect.Descriptor instead.
func (*SimpleMessageProto3WithOptional) Descriptor() ([]byte, []int) {
	return file_messages_proto3_proto_rawDescGZIP(), []int{7}
}

func (x *SimpleMessageProto3WithOptional) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *SimpleMessageProto3WithOptional) GetValue() int64 {
	if x != nil && x.Value != nil {
		return *x.Value
	}
	return 0
}

var File_messages_proto3_proto protoreflect.FileDescriptor

var file_messages_proto3_proto_rawDesc = []byte{
	0x0a, 0x15, 0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x73, 0x5f, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x33, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x08, 0x74, 0x65, 0x73, 0x74, 0x64, 0x61, 0x74,
	0x61, 0x1a, 0x1e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62,
	0x75, 0x66, 0x2f, 0x77, 0x72, 0x61, 0x70, 0x70, 0x65, 0x72, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x22, 0x5c, 0x0a, 0x13, 0x53, 0x69, 0x6d, 0x70, 0x6c, 0x65, 0x4d, 0x65, 0x73, 0x73, 0x61,
	0x67, 0x65, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x31, 0x0a, 0x05,
	0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x49, 0x6e,
	0x74, 0x36, 0x34, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x22,
	0x7a, 0x0a, 0x1b, 0x53, 0x69, 0x6d, 0x70, 0x6c, 0x65, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65,
	0x52, 0x65, 0x71, 0x75, 0x69, 0x72, 0x65, 0x64, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x12, 0x12,
	0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61,
	0x6d, 0x65, 0x12, 0x14, 0x0a, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28,
	0x03, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x31, 0x0a, 0x05, 0x6f, 0x74, 0x68, 0x65,
	0x72, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65,
	0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x49, 0x6e, 0x74, 0x36, 0x34, 0x56,
	0x61, 0x6c, 0x75, 0x65, 0x52, 0x05, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x22, 0x8e, 0x01, 0x0a, 0x22,
	0x53, 0x69, 0x6d, 0x70, 0x6c, 0x65, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x57, 0x69, 0x74,
	0x68, 0x45, 0x78, 0x74, 0x72, 0x61, 0x46, 0x69, 0x65, 0x6c, 0x64, 0x73, 0x50, 0x72, 0x6f, 0x74,
	0x6f, 0x33, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09,
	0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x21, 0x0a, 0x0c, 0x75, 0x6e, 0x6b, 0x6e, 0x6f, 0x77,
	0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x0b, 0x75, 0x6e,
	0x6b, 0x6e, 0x6f, 0x77, 0x6e, 0x4e, 0x61, 0x6d, 0x65, 0x12, 0x31, 0x0a, 0x05, 0x76, 0x61, 0x6c,
	0x75, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c,
	0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x49, 0x6e, 0x74, 0x36, 0x34,
	0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x22, 0x99, 0x01, 0x0a,
	0x19, 0x53, 0x69, 0x6d, 0x70, 0x6c, 0x65, 0x47, 0x69, 0x74, 0x68, 0x75, 0x62, 0x4d, 0x65, 0x73,
	0x73, 0x61, 0x67, 0x65, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61,
	0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x31,
	0x0a, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e,
	0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e,
	0x49, 0x6e, 0x74, 0x36, 0x34, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75,
	0x65, 0x12, 0x35, 0x0a, 0x04, 0x72, 0x65, 0x70, 0x6f, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32,
	0x21, 0x2e, 0x74, 0x65, 0x73, 0x74, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x47, 0x69, 0x74, 0x68, 0x75,
	0x62, 0x41, 0x72, 0x63, 0x68, 0x69, 0x76, 0x65, 0x52, 0x65, 0x70, 0x6f, 0x50, 0x72, 0x6f, 0x74,
	0x6f, 0x33, 0x52, 0x04, 0x72, 0x65, 0x70, 0x6f, 0x22, 0xa8, 0x02, 0x0a, 0x19, 0x47, 0x69, 0x74,
	0x68, 0x75, 0x62, 0x41, 0x72, 0x63, 0x68, 0x69, 0x76, 0x65, 0x45, 0x6e, 0x74, 0x69, 0x74, 0x79,
	0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x12, 0x2b, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x62, 0x75, 0x66, 0x2e, 0x49, 0x6e, 0x74, 0x36, 0x34, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52,
	0x02, 0x69, 0x64, 0x12, 0x32, 0x0a, 0x05, 0x6c, 0x6f, 0x67, 0x69, 0x6e, 0x18, 0x02, 0x20, 0x01,
	0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65,
	0x52, 0x05, 0x6c, 0x6f, 0x67, 0x69, 0x6e, 0x12, 0x3d, 0x0a, 0x0b, 0x67, 0x72, 0x61, 0x76, 0x61,
	0x74, 0x61, 0x72, 0x5f, 0x69, 0x64, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67,
	0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53,
	0x74, 0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x0a, 0x67, 0x72, 0x61, 0x76,
	0x61, 0x74, 0x61, 0x72, 0x49, 0x64, 0x12, 0x3b, 0x0a, 0x0a, 0x61, 0x76, 0x61, 0x74, 0x61, 0x72,
	0x5f, 0x75, 0x72, 0x6c, 0x18, 0x04, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74, 0x72,
	0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x09, 0x61, 0x76, 0x61, 0x74, 0x61, 0x72,
	0x55, 0x72, 0x6c, 0x12, 0x2e, 0x0a, 0x03, 0x75, 0x72, 0x6c, 0x18, 0x05, 0x20, 0x01, 0x28, 0x0b,
	0x32, 0x1c, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62,
	0x75, 0x66, 0x2e, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x03,
	0x75, 0x72, 0x6c, 0x22, 0xa8, 0x01, 0x0a, 0x17, 0x47, 0x69, 0x74, 0x68, 0x75, 0x62, 0x41, 0x72,
	0x63, 0x68, 0x69, 0x76, 0x65, 0x52, 0x65, 0x70, 0x6f, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x12,
	0x2b, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x49, 0x6e,
	0x74, 0x36, 0x34, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x02, 0x69, 0x64, 0x12, 0x30, 0x0a, 0x04,
	0x6e, 0x61, 0x6d, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74, 0x72,
	0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x2e,
	0x0a, 0x03, 0x75, 0x72, 0x6c, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74,
	0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x03, 0x75, 0x72, 0x6c, 0x22, 0x81,
	0x04, 0x0a, 0x1a, 0x47, 0x69, 0x74, 0x68, 0x75, 0x62, 0x41, 0x72, 0x63, 0x68, 0x69, 0x76, 0x65,
	0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x12, 0x30, 0x0a,
	0x04, 0x74, 0x79, 0x70, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74,
	0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x04, 0x74, 0x79, 0x70, 0x65, 0x12,
	0x32, 0x0a, 0x06, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32,
	0x1a, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75,
	0x66, 0x2e, 0x42, 0x6f, 0x6f, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x06, 0x70, 0x75, 0x62,
	0x6c, 0x69, 0x63, 0x12, 0x36, 0x0a, 0x07, 0x70, 0x61, 0x79, 0x6c, 0x6f, 0x61, 0x64, 0x18, 0x03,
	0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c,
	0x75, 0x65, 0x52, 0x07, 0x70, 0x61, 0x79, 0x6c, 0x6f, 0x61, 0x64, 0x12, 0x35, 0x0a, 0x04, 0x72,
	0x65, 0x70, 0x6f, 0x18, 0x04, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x21, 0x2e, 0x74, 0x65, 0x73, 0x74,
	0x64, 0x61, 0x74, 0x61, 0x2e, 0x47, 0x69, 0x74, 0x68, 0x75, 0x62, 0x41, 0x72, 0x63, 0x68, 0x69,
	0x76, 0x65, 0x52, 0x65, 0x70, 0x6f, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x52, 0x04, 0x72, 0x65,
	0x70, 0x6f, 0x12, 0x39, 0x0a, 0x05, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x18, 0x05, 0x20, 0x01, 0x28,
	0x0b, 0x32, 0x23, 0x2e, 0x74, 0x65, 0x73, 0x74, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x47, 0x69, 0x74,
	0x68, 0x75, 0x62, 0x41, 0x72, 0x63, 0x68, 0x69, 0x76, 0x65, 0x45, 0x6e, 0x74, 0x69, 0x74, 0x79,
	0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x52, 0x05, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x12, 0x35, 0x0a,
	0x03, 0x6f, 0x72, 0x67, 0x18, 0x06, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x23, 0x2e, 0x74, 0x65, 0x73,
	0x74, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x47, 0x69, 0x74, 0x68, 0x75, 0x62, 0x41, 0x72, 0x63, 0x68,
	0x69, 0x76, 0x65, 0x45, 0x6e, 0x74, 0x69, 0x74, 0x79, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x52,
	0x03, 0x6f, 0x72, 0x67, 0x12, 0x3a, 0x0a, 0x0a, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x5f,
	0x61, 0x74, 0x18, 0x07, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c,
	0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x49, 0x6e, 0x74, 0x36, 0x34,
	0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x09, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x41, 0x74,
	0x12, 0x2c, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x08, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67,
	0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53,
	0x74, 0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x02, 0x69, 0x64, 0x12, 0x32,
	0x0a, 0x05, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x18, 0x09, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e,
	0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e,
	0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x05, 0x6f, 0x74, 0x68,
	0x65, 0x72, 0x22, 0x5a, 0x0a, 0x1f, 0x53, 0x69, 0x6d, 0x70, 0x6c, 0x65, 0x4d, 0x65, 0x73, 0x73,
	0x61, 0x67, 0x65, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x57, 0x69, 0x74, 0x68, 0x4f, 0x70, 0x74,
	0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x19, 0x0a, 0x05, 0x76, 0x61, 0x6c,
	0x75, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x03, 0x48, 0x00, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75,
	0x65, 0x88, 0x01, 0x01, 0x42, 0x08, 0x0a, 0x06, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x42, 0x83,
	0x01, 0x0a, 0x0c, 0x63, 0x6f, 0x6d, 0x2e, 0x74, 0x65, 0x73, 0x74, 0x64, 0x61, 0x74, 0x61, 0x42,
	0x13, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x73, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x33, 0x50,
	0x72, 0x6f, 0x74, 0x6f, 0x50, 0x01, 0x5a, 0x1e, 0x63, 0x6d, 0x64, 0x2f, 0x62, 0x69, 0x67, 0x71,
	0x75, 0x65, 0x72, 0x79, 0x2d, 0x65, 0x6d, 0x75, 0x6c, 0x61, 0x74, 0x6f, 0x72, 0x2f, 0x74, 0x65,
	0x73, 0x74, 0x64, 0x61, 0x74, 0x61, 0xa2, 0x02, 0x03, 0x54, 0x58, 0x58, 0xaa, 0x02, 0x08, 0x54,
	0x65, 0x73, 0x74, 0x64, 0x61, 0x74, 0x61, 0xca, 0x02, 0x08, 0x54, 0x65, 0x73, 0x74, 0x64, 0x61,
	0x74, 0x61, 0xe2, 0x02, 0x14, 0x54, 0x65, 0x73, 0x74, 0x64, 0x61, 0x74, 0x61, 0x5c, 0x47, 0x50,
	0x42, 0x4d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0xea, 0x02, 0x08, 0x54, 0x65, 0x73, 0x74,
	0x64, 0x61, 0x74, 0x61, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_messages_proto3_proto_rawDescOnce sync.Once
	file_messages_proto3_proto_rawDescData = file_messages_proto3_proto_rawDesc
)

func file_messages_proto3_proto_rawDescGZIP() []byte {
	file_messages_proto3_proto_rawDescOnce.Do(func() {
		file_messages_proto3_proto_rawDescData = protoimpl.X.CompressGZIP(file_messages_proto3_proto_rawDescData)
	})
	return file_messages_proto3_proto_rawDescData
}

var file_messages_proto3_proto_msgTypes = make([]protoimpl.MessageInfo, 8)
var file_messages_proto3_proto_goTypes = []interface{}{
	(*SimpleMessageProto3)(nil),                // 0: testdata.SimpleMessageProto3
	(*SimpleMessageRequiredProto3)(nil),        // 1: testdata.SimpleMessageRequiredProto3
	(*SimpleMessageWithExtraFieldsProto3)(nil), // 2: testdata.SimpleMessageWithExtraFieldsProto3
	(*SimpleGithubMessageProto3)(nil),          // 3: testdata.SimpleGithubMessageProto3
	(*GithubArchiveEntityProto3)(nil),          // 4: testdata.GithubArchiveEntityProto3
	(*GithubArchiveRepoProto3)(nil),            // 5: testdata.GithubArchiveRepoProto3
	(*GithubArchiveMessageProto3)(nil),         // 6: testdata.GithubArchiveMessageProto3
	(*SimpleMessageProto3WithOptional)(nil),    // 7: testdata.SimpleMessageProto3WithOptional
	(*wrapperspb.Int64Value)(nil),              // 8: google.protobuf.Int64Value
	(*wrapperspb.StringValue)(nil),             // 9: google.protobuf.StringValue
	(*wrapperspb.BoolValue)(nil),               // 10: google.protobuf.BoolValue
}
var file_messages_proto3_proto_depIdxs = []int32{
	8,  // 0: testdata.SimpleMessageProto3.value:type_name -> google.protobuf.Int64Value
	8,  // 1: testdata.SimpleMessageRequiredProto3.other:type_name -> google.protobuf.Int64Value
	8,  // 2: testdata.SimpleMessageWithExtraFieldsProto3.value:type_name -> google.protobuf.Int64Value
	8,  // 3: testdata.SimpleGithubMessageProto3.value:type_name -> google.protobuf.Int64Value
	5,  // 4: testdata.SimpleGithubMessageProto3.repo:type_name -> testdata.GithubArchiveRepoProto3
	8,  // 5: testdata.GithubArchiveEntityProto3.id:type_name -> google.protobuf.Int64Value
	9,  // 6: testdata.GithubArchiveEntityProto3.login:type_name -> google.protobuf.StringValue
	9,  // 7: testdata.GithubArchiveEntityProto3.gravatar_id:type_name -> google.protobuf.StringValue
	9,  // 8: testdata.GithubArchiveEntityProto3.avatar_url:type_name -> google.protobuf.StringValue
	9,  // 9: testdata.GithubArchiveEntityProto3.url:type_name -> google.protobuf.StringValue
	8,  // 10: testdata.GithubArchiveRepoProto3.id:type_name -> google.protobuf.Int64Value
	9,  // 11: testdata.GithubArchiveRepoProto3.name:type_name -> google.protobuf.StringValue
	9,  // 12: testdata.GithubArchiveRepoProto3.url:type_name -> google.protobuf.StringValue
	9,  // 13: testdata.GithubArchiveMessageProto3.type:type_name -> google.protobuf.StringValue
	10, // 14: testdata.GithubArchiveMessageProto3.public:type_name -> google.protobuf.BoolValue
	9,  // 15: testdata.GithubArchiveMessageProto3.payload:type_name -> google.protobuf.StringValue
	5,  // 16: testdata.GithubArchiveMessageProto3.repo:type_name -> testdata.GithubArchiveRepoProto3
	4,  // 17: testdata.GithubArchiveMessageProto3.actor:type_name -> testdata.GithubArchiveEntityProto3
	4,  // 18: testdata.GithubArchiveMessageProto3.org:type_name -> testdata.GithubArchiveEntityProto3
	8,  // 19: testdata.GithubArchiveMessageProto3.created_at:type_name -> google.protobuf.Int64Value
	9,  // 20: testdata.GithubArchiveMessageProto3.id:type_name -> google.protobuf.StringValue
	9,  // 21: testdata.GithubArchiveMessageProto3.other:type_name -> google.protobuf.StringValue
	22, // [22:22] is the sub-list for method output_type
	22, // [22:22] is the sub-list for method input_type
	22, // [22:22] is the sub-list for extension type_name
	22, // [22:22] is the sub-list for extension extendee
	0,  // [0:22] is the sub-list for field type_name
}

func init() { file_messages_proto3_proto_init() }
func file_messages_proto3_proto_init() {
	if File_messages_proto3_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_messages_proto3_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SimpleMessageProto3); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_messages_proto3_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SimpleMessageRequiredProto3); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_messages_proto3_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SimpleMessageWithExtraFieldsProto3); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_messages_proto3_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SimpleGithubMessageProto3); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_messages_proto3_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GithubArchiveEntityProto3); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_messages_proto3_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GithubArchiveRepoProto3); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_messages_proto3_proto_msgTypes[6].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GithubArchiveMessageProto3); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_messages_proto3_proto_msgTypes[7].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SimpleMessageProto3WithOptional); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	file_messages_proto3_proto_msgTypes[7].OneofWrappers = []interface{}{}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_messages_proto3_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   8,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_messages_proto3_proto_goTypes,
		DependencyIndexes: file_messages_proto3_proto_depIdxs,
		MessageInfos:      file_messages_proto3_proto_msgTypes,
	}.Build()
	File_messages_proto3_proto = out.File
	file_messages_proto3_proto_rawDesc = nil
	file_messages_proto3_proto_goTypes = nil
	file_messages_proto3_proto_depIdxs = nil
}
