// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Code generated by aliasgen. DO NOT EDIT.

// Package phishingprotection aliases all exported identifiers in package
// "cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb".
//
// Deprecated: Please use types in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb.
// Please read https://github.com/googleapis/google-cloud-go/blob/main/migration.md
// for more details.
package phishingprotection

import (
	src "cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb"
	grpc "google.golang.org/grpc"
)

// Deprecated: Please use vars in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
var (
	File_google_cloud_phishingprotection_v1beta1_phishingprotection_proto = src.File_google_cloud_phishingprotection_v1beta1_phishingprotection_proto
)

// PhishingProtectionServiceV1Beta1Client is the client API for
// PhishingProtectionServiceV1Beta1 service. For semantics around ctx use and
// closing/ending streaming RPCs, please refer to
// https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
//
// Deprecated: Please use types in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
type PhishingProtectionServiceV1Beta1Client = src.PhishingProtectionServiceV1Beta1Client

// PhishingProtectionServiceV1Beta1Server is the server API for
// PhishingProtectionServiceV1Beta1 service.
//
// Deprecated: Please use types in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
type PhishingProtectionServiceV1Beta1Server = src.PhishingProtectionServiceV1Beta1Server

// The ReportPhishing request message.
//
// Deprecated: Please use types in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
type ReportPhishingRequest = src.ReportPhishingRequest

// The ReportPhishing (empty) response message.
//
// Deprecated: Please use types in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
type ReportPhishingResponse = src.ReportPhishingResponse

// UnimplementedPhishingProtectionServiceV1Beta1Server can be embedded to have
// forward compatible implementations.
//
// Deprecated: Please use types in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
type UnimplementedPhishingProtectionServiceV1Beta1Server = src.UnimplementedPhishingProtectionServiceV1Beta1Server

// Deprecated: Please use funcs in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
func NewPhishingProtectionServiceV1Beta1Client(cc grpc.ClientConnInterface) PhishingProtectionServiceV1Beta1Client {
	return src.NewPhishingProtectionServiceV1Beta1Client(cc)
}

// Deprecated: Please use funcs in: cloud.google.com/go/phishingprotection/apiv1beta1/phishingprotectionpb
func RegisterPhishingProtectionServiceV1Beta1Server(s *grpc.Server, srv PhishingProtectionServiceV1Beta1Server) {
	src.RegisterPhishingProtectionServiceV1Beta1Server(s, srv)
}
