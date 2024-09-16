// Copyright 2023 Google LLC.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// Code generated file. DO NOT EDIT.

// Package publicca provides access to the Public Certificate Authority API.
//
// For product documentation, see: https://cloud.google.com/public-certificate-authority/docs
//
// # Creating a client
//
// Usage example:
//
//	import "google.golang.org/api/publicca/v1beta1"
//	...
//	ctx := context.Background()
//	publiccaService, err := publicca.NewService(ctx)
//
// In this example, Google Application Default Credentials are used for authentication.
//
// For information on how to create and obtain Application Default Credentials, see https://developers.google.com/identity/protocols/application-default-credentials.
//
// # Other authentication options
//
// To use an API key for authentication (note: some APIs do not support API keys), use option.WithAPIKey:
//
//	publiccaService, err := publicca.NewService(ctx, option.WithAPIKey("AIza..."))
//
// To use an OAuth token (e.g., a user token obtained via a three-legged OAuth flow), use option.WithTokenSource:
//
//	config := &oauth2.Config{...}
//	// ...
//	token, err := config.Exchange(ctx, ...)
//	publiccaService, err := publicca.NewService(ctx, option.WithTokenSource(config.TokenSource(ctx, token)))
//
// See https://godoc.org/google.golang.org/api/option/ for details on options.
package publicca // import "google.golang.org/api/publicca/v1beta1"

import (
	"bytes"
	"context"
	"encoding/json"
	"errors"
	"fmt"
	"io"
	"net/http"
	"net/url"
	"strconv"
	"strings"

	googleapi "google.golang.org/api/googleapi"
	internal "google.golang.org/api/internal"
	gensupport "google.golang.org/api/internal/gensupport"
	option "google.golang.org/api/option"
	internaloption "google.golang.org/api/option/internaloption"
	htransport "google.golang.org/api/transport/http"
)

// Always reference these packages, just in case the auto-generated code
// below doesn't.
var _ = bytes.NewBuffer
var _ = strconv.Itoa
var _ = fmt.Sprintf
var _ = json.NewDecoder
var _ = io.Copy
var _ = url.Parse
var _ = gensupport.MarshalJSON
var _ = googleapi.Version
var _ = errors.New
var _ = strings.Replace
var _ = context.Canceled
var _ = internaloption.WithDefaultEndpoint

const apiId = "publicca:v1beta1"
const apiName = "publicca"
const apiVersion = "v1beta1"
const basePath = "https://publicca.googleapis.com/"
const mtlsBasePath = "https://publicca.mtls.googleapis.com/"

// OAuth2 scopes used by this API.
const (
	// See, edit, configure, and delete your Google Cloud data and see the
	// email address for your Google Account.
	CloudPlatformScope = "https://www.googleapis.com/auth/cloud-platform"
)

// NewService creates a new Service.
func NewService(ctx context.Context, opts ...option.ClientOption) (*Service, error) {
	scopesOption := internaloption.WithDefaultScopes(
		"https://www.googleapis.com/auth/cloud-platform",
	)
	// NOTE: prepend, so we don't override user-specified scopes.
	opts = append([]option.ClientOption{scopesOption}, opts...)
	opts = append(opts, internaloption.WithDefaultEndpoint(basePath))
	opts = append(opts, internaloption.WithDefaultMTLSEndpoint(mtlsBasePath))
	client, endpoint, err := htransport.NewClient(ctx, opts...)
	if err != nil {
		return nil, err
	}
	s, err := New(client)
	if err != nil {
		return nil, err
	}
	if endpoint != "" {
		s.BasePath = endpoint
	}
	return s, nil
}

// New creates a new Service. It uses the provided http.Client for requests.
//
// Deprecated: please use NewService instead.
// To provide a custom HTTP client, use option.WithHTTPClient.
// If you are using google.golang.org/api/googleapis/transport.APIKey, use option.WithAPIKey with NewService instead.
func New(client *http.Client) (*Service, error) {
	if client == nil {
		return nil, errors.New("client is nil")
	}
	s := &Service{client: client, BasePath: basePath}
	s.Projects = NewProjectsService(s)
	return s, nil
}

type Service struct {
	client    *http.Client
	BasePath  string // API endpoint base URL
	UserAgent string // optional additional User-Agent fragment

	Projects *ProjectsService
}

func (s *Service) userAgent() string {
	if s.UserAgent == "" {
		return googleapi.UserAgent
	}
	return googleapi.UserAgent + " " + s.UserAgent
}

func NewProjectsService(s *Service) *ProjectsService {
	rs := &ProjectsService{s: s}
	rs.Locations = NewProjectsLocationsService(s)
	return rs
}

type ProjectsService struct {
	s *Service

	Locations *ProjectsLocationsService
}

func NewProjectsLocationsService(s *Service) *ProjectsLocationsService {
	rs := &ProjectsLocationsService{s: s}
	rs.ExternalAccountKeys = NewProjectsLocationsExternalAccountKeysService(s)
	return rs
}

type ProjectsLocationsService struct {
	s *Service

	ExternalAccountKeys *ProjectsLocationsExternalAccountKeysService
}

func NewProjectsLocationsExternalAccountKeysService(s *Service) *ProjectsLocationsExternalAccountKeysService {
	rs := &ProjectsLocationsExternalAccountKeysService{s: s}
	return rs
}

type ProjectsLocationsExternalAccountKeysService struct {
	s *Service
}

// ExternalAccountKey: A representation of an ExternalAccountKey used
// for external account binding
// (https://tools.ietf.org/html/rfc8555#section-7.3.4) within ACME.
type ExternalAccountKey struct {
	// B64MacKey: Output only. Base64-URL-encoded HS256 key. It is generated
	// by the PublicCertificateAuthorityService when the ExternalAccountKey
	// is created
	B64MacKey string `json:"b64MacKey,omitempty"`

	// KeyId: Output only. Key ID. It is generated by the
	// PublicCertificateAuthorityService when the ExternalAccountKey is
	// created
	KeyId string `json:"keyId,omitempty"`

	// Name: Output only. Resource name.
	// projects/{project}/locations/{location}/externalAccountKeys/{key_id}
	Name string `json:"name,omitempty"`

	// ServerResponse contains the HTTP response code and headers from the
	// server.
	googleapi.ServerResponse `json:"-"`

	// ForceSendFields is a list of field names (e.g. "B64MacKey") to
	// unconditionally include in API requests. By default, fields with
	// empty or default values are omitted from API requests. However, any
	// non-pointer, non-interface field appearing in ForceSendFields will be
	// sent to the server regardless of whether the field is empty or not.
	// This may be used to include empty fields in Patch requests.
	ForceSendFields []string `json:"-"`

	// NullFields is a list of field names (e.g. "B64MacKey") to include in
	// API requests with the JSON null value. By default, fields with empty
	// values are omitted from API requests. However, any field with an
	// empty value appearing in NullFields will be sent to the server as
	// null. It is an error if a field in this list has a non-empty value.
	// This may be used to include null fields in Patch requests.
	NullFields []string `json:"-"`
}

func (s *ExternalAccountKey) MarshalJSON() ([]byte, error) {
	type NoMethod ExternalAccountKey
	raw := NoMethod(*s)
	return gensupport.MarshalJSON(raw, s.ForceSendFields, s.NullFields)
}

// method id "publicca.projects.locations.externalAccountKeys.create":

type ProjectsLocationsExternalAccountKeysCreateCall struct {
	s                  *Service
	parent             string
	externalaccountkey *ExternalAccountKey
	urlParams_         gensupport.URLParams
	ctx_               context.Context
	header_            http.Header
}

// Create: Creates a new ExternalAccountKey bound to the project.
//
//   - parent: The parent resource where this external_account_key will be
//     created. Format: projects/[project_id]/locations/[location]. At
//     present only the "global" location is supported.
func (r *ProjectsLocationsExternalAccountKeysService) Create(parent string, externalaccountkey *ExternalAccountKey) *ProjectsLocationsExternalAccountKeysCreateCall {
	c := &ProjectsLocationsExternalAccountKeysCreateCall{s: r.s, urlParams_: make(gensupport.URLParams)}
	c.parent = parent
	c.externalaccountkey = externalaccountkey
	return c
}

// Fields allows partial responses to be retrieved. See
// https://developers.google.com/gdata/docs/2.0/basics#PartialResponse
// for more information.
func (c *ProjectsLocationsExternalAccountKeysCreateCall) Fields(s ...googleapi.Field) *ProjectsLocationsExternalAccountKeysCreateCall {
	c.urlParams_.Set("fields", googleapi.CombineFields(s))
	return c
}

// Context sets the context to be used in this call's Do method. Any
// pending HTTP request will be aborted if the provided context is
// canceled.
func (c *ProjectsLocationsExternalAccountKeysCreateCall) Context(ctx context.Context) *ProjectsLocationsExternalAccountKeysCreateCall {
	c.ctx_ = ctx
	return c
}

// Header returns an http.Header that can be modified by the caller to
// add HTTP headers to the request.
func (c *ProjectsLocationsExternalAccountKeysCreateCall) Header() http.Header {
	if c.header_ == nil {
		c.header_ = make(http.Header)
	}
	return c.header_
}

func (c *ProjectsLocationsExternalAccountKeysCreateCall) doRequest(alt string) (*http.Response, error) {
	reqHeaders := make(http.Header)
	reqHeaders.Set("x-goog-api-client", "gl-go/"+gensupport.GoVersion()+" gdcl/"+internal.Version)
	for k, v := range c.header_ {
		reqHeaders[k] = v
	}
	reqHeaders.Set("User-Agent", c.s.userAgent())
	var body io.Reader = nil
	body, err := googleapi.WithoutDataWrapper.JSONReader(c.externalaccountkey)
	if err != nil {
		return nil, err
	}
	reqHeaders.Set("Content-Type", "application/json")
	c.urlParams_.Set("alt", alt)
	c.urlParams_.Set("prettyPrint", "false")
	urls := googleapi.ResolveRelative(c.s.BasePath, "v1beta1/{+parent}/externalAccountKeys")
	urls += "?" + c.urlParams_.Encode()
	req, err := http.NewRequest("POST", urls, body)
	if err != nil {
		return nil, err
	}
	req.Header = reqHeaders
	googleapi.Expand(req.URL, map[string]string{
		"parent": c.parent,
	})
	return gensupport.SendRequest(c.ctx_, c.s.client, req)
}

// Do executes the "publicca.projects.locations.externalAccountKeys.create" call.
// Exactly one of *ExternalAccountKey or error will be non-nil. Any
// non-2xx status code is an error. Response headers are in either
// *ExternalAccountKey.ServerResponse.Header or (if a response was
// returned at all) in error.(*googleapi.Error).Header. Use
// googleapi.IsNotModified to check whether the returned error was
// because http.StatusNotModified was returned.
func (c *ProjectsLocationsExternalAccountKeysCreateCall) Do(opts ...googleapi.CallOption) (*ExternalAccountKey, error) {
	gensupport.SetOptions(c.urlParams_, opts...)
	res, err := c.doRequest("json")
	if res != nil && res.StatusCode == http.StatusNotModified {
		if res.Body != nil {
			res.Body.Close()
		}
		return nil, gensupport.WrapError(&googleapi.Error{
			Code:   res.StatusCode,
			Header: res.Header,
		})
	}
	if err != nil {
		return nil, err
	}
	defer googleapi.CloseBody(res)
	if err := googleapi.CheckResponse(res); err != nil {
		return nil, gensupport.WrapError(err)
	}
	ret := &ExternalAccountKey{
		ServerResponse: googleapi.ServerResponse{
			Header:         res.Header,
			HTTPStatusCode: res.StatusCode,
		},
	}
	target := &ret
	if err := gensupport.DecodeResponse(target, res); err != nil {
		return nil, err
	}
	return ret, nil
	// {
	//   "description": "Creates a new ExternalAccountKey bound to the project.",
	//   "flatPath": "v1beta1/projects/{projectsId}/locations/{locationsId}/externalAccountKeys",
	//   "httpMethod": "POST",
	//   "id": "publicca.projects.locations.externalAccountKeys.create",
	//   "parameterOrder": [
	//     "parent"
	//   ],
	//   "parameters": {
	//     "parent": {
	//       "description": "Required. The parent resource where this external_account_key will be created. Format: projects/[project_id]/locations/[location]. At present only the \"global\" location is supported.",
	//       "location": "path",
	//       "pattern": "^projects/[^/]+/locations/[^/]+$",
	//       "required": true,
	//       "type": "string"
	//     }
	//   },
	//   "path": "v1beta1/{+parent}/externalAccountKeys",
	//   "request": {
	//     "$ref": "ExternalAccountKey"
	//   },
	//   "response": {
	//     "$ref": "ExternalAccountKey"
	//   },
	//   "scopes": [
	//     "https://www.googleapis.com/auth/cloud-platform"
	//   ]
	// }

}
