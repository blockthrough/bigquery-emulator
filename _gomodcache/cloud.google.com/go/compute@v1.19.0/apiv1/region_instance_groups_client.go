// Copyright 2023 Google LLC
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

// Code generated by protoc-gen-go_gapic. DO NOT EDIT.

package compute

import (
	"bytes"
	"context"
	"fmt"
	"io/ioutil"
	"math"
	"net/http"
	"net/url"

	computepb "cloud.google.com/go/compute/apiv1/computepb"
	gax "github.com/googleapis/gax-go/v2"
	"google.golang.org/api/googleapi"
	"google.golang.org/api/iterator"
	"google.golang.org/api/option"
	"google.golang.org/api/option/internaloption"
	httptransport "google.golang.org/api/transport/http"
	"google.golang.org/grpc"
	"google.golang.org/grpc/metadata"
	"google.golang.org/protobuf/encoding/protojson"
	"google.golang.org/protobuf/proto"
)

var newRegionInstanceGroupsClientHook clientHook

// RegionInstanceGroupsCallOptions contains the retry settings for each method of RegionInstanceGroupsClient.
type RegionInstanceGroupsCallOptions struct {
	Get           []gax.CallOption
	List          []gax.CallOption
	ListInstances []gax.CallOption
	SetNamedPorts []gax.CallOption
}

func defaultRegionInstanceGroupsRESTCallOptions() *RegionInstanceGroupsCallOptions {
	return &RegionInstanceGroupsCallOptions{
		Get:           []gax.CallOption{},
		List:          []gax.CallOption{},
		ListInstances: []gax.CallOption{},
		SetNamedPorts: []gax.CallOption{},
	}
}

// internalRegionInstanceGroupsClient is an interface that defines the methods available from Google Compute Engine API.
type internalRegionInstanceGroupsClient interface {
	Close() error
	setGoogleClientInfo(...string)
	Connection() *grpc.ClientConn
	Get(context.Context, *computepb.GetRegionInstanceGroupRequest, ...gax.CallOption) (*computepb.InstanceGroup, error)
	List(context.Context, *computepb.ListRegionInstanceGroupsRequest, ...gax.CallOption) *InstanceGroupIterator
	ListInstances(context.Context, *computepb.ListInstancesRegionInstanceGroupsRequest, ...gax.CallOption) *InstanceWithNamedPortsIterator
	SetNamedPorts(context.Context, *computepb.SetNamedPortsRegionInstanceGroupRequest, ...gax.CallOption) (*Operation, error)
}

// RegionInstanceGroupsClient is a client for interacting with Google Compute Engine API.
// Methods, except Close, may be called concurrently. However, fields must not be modified concurrently with method calls.
//
// The RegionInstanceGroups API.
type RegionInstanceGroupsClient struct {
	// The internal transport-dependent client.
	internalClient internalRegionInstanceGroupsClient

	// The call options for this service.
	CallOptions *RegionInstanceGroupsCallOptions
}

// Wrapper methods routed to the internal client.

// Close closes the connection to the API service. The user should invoke this when
// the client is no longer required.
func (c *RegionInstanceGroupsClient) Close() error {
	return c.internalClient.Close()
}

// setGoogleClientInfo sets the name and version of the application in
// the `x-goog-api-client` header passed on each request. Intended for
// use by Google-written clients.
func (c *RegionInstanceGroupsClient) setGoogleClientInfo(keyval ...string) {
	c.internalClient.setGoogleClientInfo(keyval...)
}

// Connection returns a connection to the API service.
//
// Deprecated: Connections are now pooled so this method does not always
// return the same resource.
func (c *RegionInstanceGroupsClient) Connection() *grpc.ClientConn {
	return c.internalClient.Connection()
}

// Get returns the specified instance group resource.
func (c *RegionInstanceGroupsClient) Get(ctx context.Context, req *computepb.GetRegionInstanceGroupRequest, opts ...gax.CallOption) (*computepb.InstanceGroup, error) {
	return c.internalClient.Get(ctx, req, opts...)
}

// List retrieves the list of instance group resources contained within the specified region.
func (c *RegionInstanceGroupsClient) List(ctx context.Context, req *computepb.ListRegionInstanceGroupsRequest, opts ...gax.CallOption) *InstanceGroupIterator {
	return c.internalClient.List(ctx, req, opts...)
}

// ListInstances lists the instances in the specified instance group and displays information about the named ports. Depending on the specified options, this method can list all instances or only the instances that are running. The orderBy query parameter is not supported.
func (c *RegionInstanceGroupsClient) ListInstances(ctx context.Context, req *computepb.ListInstancesRegionInstanceGroupsRequest, opts ...gax.CallOption) *InstanceWithNamedPortsIterator {
	return c.internalClient.ListInstances(ctx, req, opts...)
}

// SetNamedPorts sets the named ports for the specified regional instance group.
func (c *RegionInstanceGroupsClient) SetNamedPorts(ctx context.Context, req *computepb.SetNamedPortsRegionInstanceGroupRequest, opts ...gax.CallOption) (*Operation, error) {
	return c.internalClient.SetNamedPorts(ctx, req, opts...)
}

// Methods, except Close, may be called concurrently. However, fields must not be modified concurrently with method calls.
type regionInstanceGroupsRESTClient struct {
	// The http endpoint to connect to.
	endpoint string

	// The http client.
	httpClient *http.Client

	// operationClient is used to call the operation-specific management service.
	operationClient *RegionOperationsClient

	// The x-goog-* metadata to be sent with each request.
	xGoogMetadata metadata.MD

	// Points back to the CallOptions field of the containing RegionInstanceGroupsClient
	CallOptions **RegionInstanceGroupsCallOptions
}

// NewRegionInstanceGroupsRESTClient creates a new region instance groups rest client.
//
// The RegionInstanceGroups API.
func NewRegionInstanceGroupsRESTClient(ctx context.Context, opts ...option.ClientOption) (*RegionInstanceGroupsClient, error) {
	clientOpts := append(defaultRegionInstanceGroupsRESTClientOptions(), opts...)
	httpClient, endpoint, err := httptransport.NewClient(ctx, clientOpts...)
	if err != nil {
		return nil, err
	}

	callOpts := defaultRegionInstanceGroupsRESTCallOptions()
	c := &regionInstanceGroupsRESTClient{
		endpoint:    endpoint,
		httpClient:  httpClient,
		CallOptions: &callOpts,
	}
	c.setGoogleClientInfo()

	o := []option.ClientOption{
		option.WithHTTPClient(httpClient),
		option.WithEndpoint(endpoint),
	}
	opC, err := NewRegionOperationsRESTClient(ctx, o...)
	if err != nil {
		return nil, err
	}
	c.operationClient = opC

	return &RegionInstanceGroupsClient{internalClient: c, CallOptions: callOpts}, nil
}

func defaultRegionInstanceGroupsRESTClientOptions() []option.ClientOption {
	return []option.ClientOption{
		internaloption.WithDefaultEndpoint("https://compute.googleapis.com"),
		internaloption.WithDefaultMTLSEndpoint("https://compute.mtls.googleapis.com"),
		internaloption.WithDefaultAudience("https://compute.googleapis.com/"),
		internaloption.WithDefaultScopes(DefaultAuthScopes()...),
	}
}

// setGoogleClientInfo sets the name and version of the application in
// the `x-goog-api-client` header passed on each request. Intended for
// use by Google-written clients.
func (c *regionInstanceGroupsRESTClient) setGoogleClientInfo(keyval ...string) {
	kv := append([]string{"gl-go", versionGo()}, keyval...)
	kv = append(kv, "gapic", getVersionClient(), "gax", gax.Version, "rest", "UNKNOWN")
	c.xGoogMetadata = metadata.Pairs("x-goog-api-client", gax.XGoogHeader(kv...))
}

// Close closes the connection to the API service. The user should invoke this when
// the client is no longer required.
func (c *regionInstanceGroupsRESTClient) Close() error {
	// Replace httpClient with nil to force cleanup.
	c.httpClient = nil
	if err := c.operationClient.Close(); err != nil {
		return err
	}
	return nil
}

// Connection returns a connection to the API service.
//
// Deprecated: This method always returns nil.
func (c *regionInstanceGroupsRESTClient) Connection() *grpc.ClientConn {
	return nil
}

// Get returns the specified instance group resource.
func (c *regionInstanceGroupsRESTClient) Get(ctx context.Context, req *computepb.GetRegionInstanceGroupRequest, opts ...gax.CallOption) (*computepb.InstanceGroup, error) {
	baseUrl, err := url.Parse(c.endpoint)
	if err != nil {
		return nil, err
	}
	baseUrl.Path += fmt.Sprintf("/compute/v1/projects/%v/regions/%v/instanceGroups/%v", req.GetProject(), req.GetRegion(), req.GetInstanceGroup())

	// Build HTTP headers from client and context metadata.
	md := metadata.Pairs("x-goog-request-params", fmt.Sprintf("%s=%v&%s=%v&%s=%v", "project", url.QueryEscape(req.GetProject()), "region", url.QueryEscape(req.GetRegion()), "instance_group", url.QueryEscape(req.GetInstanceGroup())))

	headers := buildHeaders(ctx, c.xGoogMetadata, md, metadata.Pairs("Content-Type", "application/json"))
	opts = append((*c.CallOptions).Get[0:len((*c.CallOptions).Get):len((*c.CallOptions).Get)], opts...)
	unm := protojson.UnmarshalOptions{AllowPartial: true, DiscardUnknown: true}
	resp := &computepb.InstanceGroup{}
	e := gax.Invoke(ctx, func(ctx context.Context, settings gax.CallSettings) error {
		if settings.Path != "" {
			baseUrl.Path = settings.Path
		}
		httpReq, err := http.NewRequest("GET", baseUrl.String(), nil)
		if err != nil {
			return err
		}
		httpReq = httpReq.WithContext(ctx)
		httpReq.Header = headers

		httpRsp, err := c.httpClient.Do(httpReq)
		if err != nil {
			return err
		}
		defer httpRsp.Body.Close()

		if err = googleapi.CheckResponse(httpRsp); err != nil {
			return err
		}

		buf, err := ioutil.ReadAll(httpRsp.Body)
		if err != nil {
			return err
		}

		if err := unm.Unmarshal(buf, resp); err != nil {
			return maybeUnknownEnum(err)
		}

		return nil
	}, opts...)
	if e != nil {
		return nil, e
	}
	return resp, nil
}

// List retrieves the list of instance group resources contained within the specified region.
func (c *regionInstanceGroupsRESTClient) List(ctx context.Context, req *computepb.ListRegionInstanceGroupsRequest, opts ...gax.CallOption) *InstanceGroupIterator {
	it := &InstanceGroupIterator{}
	req = proto.Clone(req).(*computepb.ListRegionInstanceGroupsRequest)
	unm := protojson.UnmarshalOptions{AllowPartial: true, DiscardUnknown: true}
	it.InternalFetch = func(pageSize int, pageToken string) ([]*computepb.InstanceGroup, string, error) {
		resp := &computepb.RegionInstanceGroupList{}
		if pageToken != "" {
			req.PageToken = proto.String(pageToken)
		}
		if pageSize > math.MaxInt32 {
			req.MaxResults = proto.Uint32(math.MaxInt32)
		} else if pageSize != 0 {
			req.MaxResults = proto.Uint32(uint32(pageSize))
		}
		baseUrl, err := url.Parse(c.endpoint)
		if err != nil {
			return nil, "", err
		}
		baseUrl.Path += fmt.Sprintf("/compute/v1/projects/%v/regions/%v/instanceGroups", req.GetProject(), req.GetRegion())

		params := url.Values{}
		if req != nil && req.Filter != nil {
			params.Add("filter", fmt.Sprintf("%v", req.GetFilter()))
		}
		if req != nil && req.MaxResults != nil {
			params.Add("maxResults", fmt.Sprintf("%v", req.GetMaxResults()))
		}
		if req != nil && req.OrderBy != nil {
			params.Add("orderBy", fmt.Sprintf("%v", req.GetOrderBy()))
		}
		if req != nil && req.PageToken != nil {
			params.Add("pageToken", fmt.Sprintf("%v", req.GetPageToken()))
		}
		if req != nil && req.ReturnPartialSuccess != nil {
			params.Add("returnPartialSuccess", fmt.Sprintf("%v", req.GetReturnPartialSuccess()))
		}

		baseUrl.RawQuery = params.Encode()

		// Build HTTP headers from client and context metadata.
		headers := buildHeaders(ctx, c.xGoogMetadata, metadata.Pairs("Content-Type", "application/json"))
		e := gax.Invoke(ctx, func(ctx context.Context, settings gax.CallSettings) error {
			if settings.Path != "" {
				baseUrl.Path = settings.Path
			}
			httpReq, err := http.NewRequest("GET", baseUrl.String(), nil)
			if err != nil {
				return err
			}
			httpReq.Header = headers

			httpRsp, err := c.httpClient.Do(httpReq)
			if err != nil {
				return err
			}
			defer httpRsp.Body.Close()

			if err = googleapi.CheckResponse(httpRsp); err != nil {
				return err
			}

			buf, err := ioutil.ReadAll(httpRsp.Body)
			if err != nil {
				return err
			}

			if err := unm.Unmarshal(buf, resp); err != nil {
				return maybeUnknownEnum(err)
			}

			return nil
		}, opts...)
		if e != nil {
			return nil, "", e
		}
		it.Response = resp
		return resp.GetItems(), resp.GetNextPageToken(), nil
	}

	fetch := func(pageSize int, pageToken string) (string, error) {
		items, nextPageToken, err := it.InternalFetch(pageSize, pageToken)
		if err != nil {
			return "", err
		}
		it.items = append(it.items, items...)
		return nextPageToken, nil
	}

	it.pageInfo, it.nextFunc = iterator.NewPageInfo(fetch, it.bufLen, it.takeBuf)
	it.pageInfo.MaxSize = int(req.GetMaxResults())
	it.pageInfo.Token = req.GetPageToken()

	return it
}

// ListInstances lists the instances in the specified instance group and displays information about the named ports. Depending on the specified options, this method can list all instances or only the instances that are running. The orderBy query parameter is not supported.
func (c *regionInstanceGroupsRESTClient) ListInstances(ctx context.Context, req *computepb.ListInstancesRegionInstanceGroupsRequest, opts ...gax.CallOption) *InstanceWithNamedPortsIterator {
	it := &InstanceWithNamedPortsIterator{}
	req = proto.Clone(req).(*computepb.ListInstancesRegionInstanceGroupsRequest)
	m := protojson.MarshalOptions{AllowPartial: true}
	unm := protojson.UnmarshalOptions{AllowPartial: true, DiscardUnknown: true}
	it.InternalFetch = func(pageSize int, pageToken string) ([]*computepb.InstanceWithNamedPorts, string, error) {
		resp := &computepb.RegionInstanceGroupsListInstances{}
		if pageToken != "" {
			req.PageToken = proto.String(pageToken)
		}
		if pageSize > math.MaxInt32 {
			req.MaxResults = proto.Uint32(math.MaxInt32)
		} else if pageSize != 0 {
			req.MaxResults = proto.Uint32(uint32(pageSize))
		}
		jsonReq, err := m.Marshal(req)
		if err != nil {
			return nil, "", err
		}

		baseUrl, err := url.Parse(c.endpoint)
		if err != nil {
			return nil, "", err
		}
		baseUrl.Path += fmt.Sprintf("/compute/v1/projects/%v/regions/%v/instanceGroups/%v/listInstances", req.GetProject(), req.GetRegion(), req.GetInstanceGroup())

		params := url.Values{}
		if req != nil && req.Filter != nil {
			params.Add("filter", fmt.Sprintf("%v", req.GetFilter()))
		}
		if req != nil && req.MaxResults != nil {
			params.Add("maxResults", fmt.Sprintf("%v", req.GetMaxResults()))
		}
		if req != nil && req.OrderBy != nil {
			params.Add("orderBy", fmt.Sprintf("%v", req.GetOrderBy()))
		}
		if req != nil && req.PageToken != nil {
			params.Add("pageToken", fmt.Sprintf("%v", req.GetPageToken()))
		}
		if req != nil && req.ReturnPartialSuccess != nil {
			params.Add("returnPartialSuccess", fmt.Sprintf("%v", req.GetReturnPartialSuccess()))
		}

		baseUrl.RawQuery = params.Encode()

		// Build HTTP headers from client and context metadata.
		headers := buildHeaders(ctx, c.xGoogMetadata, metadata.Pairs("Content-Type", "application/json"))
		e := gax.Invoke(ctx, func(ctx context.Context, settings gax.CallSettings) error {
			if settings.Path != "" {
				baseUrl.Path = settings.Path
			}
			httpReq, err := http.NewRequest("POST", baseUrl.String(), bytes.NewReader(jsonReq))
			if err != nil {
				return err
			}
			httpReq.Header = headers

			httpRsp, err := c.httpClient.Do(httpReq)
			if err != nil {
				return err
			}
			defer httpRsp.Body.Close()

			if err = googleapi.CheckResponse(httpRsp); err != nil {
				return err
			}

			buf, err := ioutil.ReadAll(httpRsp.Body)
			if err != nil {
				return err
			}

			if err := unm.Unmarshal(buf, resp); err != nil {
				return maybeUnknownEnum(err)
			}

			return nil
		}, opts...)
		if e != nil {
			return nil, "", e
		}
		it.Response = resp
		return resp.GetItems(), resp.GetNextPageToken(), nil
	}

	fetch := func(pageSize int, pageToken string) (string, error) {
		items, nextPageToken, err := it.InternalFetch(pageSize, pageToken)
		if err != nil {
			return "", err
		}
		it.items = append(it.items, items...)
		return nextPageToken, nil
	}

	it.pageInfo, it.nextFunc = iterator.NewPageInfo(fetch, it.bufLen, it.takeBuf)
	it.pageInfo.MaxSize = int(req.GetMaxResults())
	it.pageInfo.Token = req.GetPageToken()

	return it
}

// SetNamedPorts sets the named ports for the specified regional instance group.
func (c *regionInstanceGroupsRESTClient) SetNamedPorts(ctx context.Context, req *computepb.SetNamedPortsRegionInstanceGroupRequest, opts ...gax.CallOption) (*Operation, error) {
	m := protojson.MarshalOptions{AllowPartial: true}
	body := req.GetRegionInstanceGroupsSetNamedPortsRequestResource()
	jsonReq, err := m.Marshal(body)
	if err != nil {
		return nil, err
	}

	baseUrl, err := url.Parse(c.endpoint)
	if err != nil {
		return nil, err
	}
	baseUrl.Path += fmt.Sprintf("/compute/v1/projects/%v/regions/%v/instanceGroups/%v/setNamedPorts", req.GetProject(), req.GetRegion(), req.GetInstanceGroup())

	params := url.Values{}
	if req != nil && req.RequestId != nil {
		params.Add("requestId", fmt.Sprintf("%v", req.GetRequestId()))
	}

	baseUrl.RawQuery = params.Encode()

	// Build HTTP headers from client and context metadata.
	md := metadata.Pairs("x-goog-request-params", fmt.Sprintf("%s=%v&%s=%v&%s=%v", "project", url.QueryEscape(req.GetProject()), "region", url.QueryEscape(req.GetRegion()), "instance_group", url.QueryEscape(req.GetInstanceGroup())))

	headers := buildHeaders(ctx, c.xGoogMetadata, md, metadata.Pairs("Content-Type", "application/json"))
	opts = append((*c.CallOptions).SetNamedPorts[0:len((*c.CallOptions).SetNamedPorts):len((*c.CallOptions).SetNamedPorts)], opts...)
	unm := protojson.UnmarshalOptions{AllowPartial: true, DiscardUnknown: true}
	resp := &computepb.Operation{}
	e := gax.Invoke(ctx, func(ctx context.Context, settings gax.CallSettings) error {
		if settings.Path != "" {
			baseUrl.Path = settings.Path
		}
		httpReq, err := http.NewRequest("POST", baseUrl.String(), bytes.NewReader(jsonReq))
		if err != nil {
			return err
		}
		httpReq = httpReq.WithContext(ctx)
		httpReq.Header = headers

		httpRsp, err := c.httpClient.Do(httpReq)
		if err != nil {
			return err
		}
		defer httpRsp.Body.Close()

		if err = googleapi.CheckResponse(httpRsp); err != nil {
			return err
		}

		buf, err := ioutil.ReadAll(httpRsp.Body)
		if err != nil {
			return err
		}

		if err := unm.Unmarshal(buf, resp); err != nil {
			return maybeUnknownEnum(err)
		}

		return nil
	}, opts...)
	if e != nil {
		return nil, e
	}
	op := &Operation{
		&regionOperationsHandle{
			c:       c.operationClient,
			proto:   resp,
			project: req.GetProject(),
			region:  req.GetRegion(),
		},
	}
	return op, nil
}
