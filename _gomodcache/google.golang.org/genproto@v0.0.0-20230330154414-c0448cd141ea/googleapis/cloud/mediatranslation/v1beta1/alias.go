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

// Package mediatranslation aliases all exported identifiers in package
// "cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb".
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb.
// Please read https://github.com/googleapis/google-cloud-go/blob/main/migration.md
// for more details.
package mediatranslation

import (
	src "cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb"
	grpc "google.golang.org/grpc"
)

// Deprecated: Please use consts in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
const (
	StreamingTranslateSpeechResponse_END_OF_SINGLE_UTTERANCE       = src.StreamingTranslateSpeechResponse_END_OF_SINGLE_UTTERANCE
	StreamingTranslateSpeechResponse_SPEECH_EVENT_TYPE_UNSPECIFIED = src.StreamingTranslateSpeechResponse_SPEECH_EVENT_TYPE_UNSPECIFIED
)

// Deprecated: Please use vars in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
var (
	File_google_cloud_mediatranslation_v1beta1_media_translation_proto = src.File_google_cloud_mediatranslation_v1beta1_media_translation_proto
	StreamingTranslateSpeechResponse_SpeechEventType_name              = src.StreamingTranslateSpeechResponse_SpeechEventType_name
	StreamingTranslateSpeechResponse_SpeechEventType_value             = src.StreamingTranslateSpeechResponse_SpeechEventType_value
)

// SpeechTranslationServiceClient is the client API for
// SpeechTranslationService service. For semantics around ctx use and
// closing/ending streaming RPCs, please refer to
// https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type SpeechTranslationServiceClient = src.SpeechTranslationServiceClient

// SpeechTranslationServiceServer is the server API for
// SpeechTranslationService service.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type SpeechTranslationServiceServer = src.SpeechTranslationServiceServer
type SpeechTranslationService_StreamingTranslateSpeechClient = src.SpeechTranslationService_StreamingTranslateSpeechClient
type SpeechTranslationService_StreamingTranslateSpeechServer = src.SpeechTranslationService_StreamingTranslateSpeechServer

// Config used for streaming translation.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type StreamingTranslateSpeechConfig = src.StreamingTranslateSpeechConfig

// The top-level message sent by the client for the `StreamingTranslateSpeech`
// method. Multiple `StreamingTranslateSpeechRequest` messages are sent. The
// first message must contain a `streaming_config` message and must not contain
// `audio_content` data. All subsequent messages must contain `audio_content`
// data and must not contain a `streaming_config` message.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type StreamingTranslateSpeechRequest = src.StreamingTranslateSpeechRequest
type StreamingTranslateSpeechRequest_AudioContent = src.StreamingTranslateSpeechRequest_AudioContent
type StreamingTranslateSpeechRequest_StreamingConfig = src.StreamingTranslateSpeechRequest_StreamingConfig

// A streaming speech translation response corresponding to a portion of the
// audio currently processed.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type StreamingTranslateSpeechResponse = src.StreamingTranslateSpeechResponse

// Indicates the type of speech event.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type StreamingTranslateSpeechResponse_SpeechEventType = src.StreamingTranslateSpeechResponse_SpeechEventType

// A streaming speech translation result corresponding to a portion of the
// audio that is currently being processed.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type StreamingTranslateSpeechResult = src.StreamingTranslateSpeechResult

// Text translation result.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type StreamingTranslateSpeechResult_TextTranslationResult = src.StreamingTranslateSpeechResult_TextTranslationResult
type StreamingTranslateSpeechResult_TextTranslationResult_ = src.StreamingTranslateSpeechResult_TextTranslationResult_

// Provides information to the speech translation that specifies how to
// process the request.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type TranslateSpeechConfig = src.TranslateSpeechConfig

// UnimplementedSpeechTranslationServiceServer can be embedded to have forward
// compatible implementations.
//
// Deprecated: Please use types in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
type UnimplementedSpeechTranslationServiceServer = src.UnimplementedSpeechTranslationServiceServer

// Deprecated: Please use funcs in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
func NewSpeechTranslationServiceClient(cc grpc.ClientConnInterface) SpeechTranslationServiceClient {
	return src.NewSpeechTranslationServiceClient(cc)
}

// Deprecated: Please use funcs in: cloud.google.com/go/mediatranslation/apiv1beta1/mediatranslationpb
func RegisterSpeechTranslationServiceServer(s *grpc.Server, srv SpeechTranslationServiceServer) {
	src.RegisterSpeechTranslationServiceServer(s, srv)
}
