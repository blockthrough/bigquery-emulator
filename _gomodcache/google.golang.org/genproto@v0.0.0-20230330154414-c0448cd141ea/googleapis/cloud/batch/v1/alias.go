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

// Package batch aliases all exported identifiers in package
// "cloud.google.com/go/batch/apiv1/batchpb".
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb.
// Please read https://github.com/googleapis/google-cloud-go/blob/main/migration.md
// for more details.
package batch

import (
	src "cloud.google.com/go/batch/apiv1/batchpb"
	grpc "google.golang.org/grpc"
)

// Deprecated: Please use consts in: cloud.google.com/go/batch/apiv1/batchpb
const (
	AllocationPolicy_PREEMPTIBLE                    = src.AllocationPolicy_PREEMPTIBLE
	AllocationPolicy_PROVISIONING_MODEL_UNSPECIFIED = src.AllocationPolicy_PROVISIONING_MODEL_UNSPECIFIED
	AllocationPolicy_SPOT                           = src.AllocationPolicy_SPOT
	AllocationPolicy_STANDARD                       = src.AllocationPolicy_STANDARD
	JobNotification_JOB_STATE_CHANGED               = src.JobNotification_JOB_STATE_CHANGED
	JobNotification_TASK_STATE_CHANGED              = src.JobNotification_TASK_STATE_CHANGED
	JobNotification_TYPE_UNSPECIFIED                = src.JobNotification_TYPE_UNSPECIFIED
	JobStatus_DELETION_IN_PROGRESS                  = src.JobStatus_DELETION_IN_PROGRESS
	JobStatus_FAILED                                = src.JobStatus_FAILED
	JobStatus_QUEUED                                = src.JobStatus_QUEUED
	JobStatus_RUNNING                               = src.JobStatus_RUNNING
	JobStatus_SCHEDULED                             = src.JobStatus_SCHEDULED
	JobStatus_STATE_UNSPECIFIED                     = src.JobStatus_STATE_UNSPECIFIED
	JobStatus_SUCCEEDED                             = src.JobStatus_SUCCEEDED
	LifecyclePolicy_ACTION_UNSPECIFIED              = src.LifecyclePolicy_ACTION_UNSPECIFIED
	LifecyclePolicy_FAIL_TASK                       = src.LifecyclePolicy_FAIL_TASK
	LifecyclePolicy_RETRY_TASK                      = src.LifecyclePolicy_RETRY_TASK
	LogsPolicy_CLOUD_LOGGING                        = src.LogsPolicy_CLOUD_LOGGING
	LogsPolicy_DESTINATION_UNSPECIFIED              = src.LogsPolicy_DESTINATION_UNSPECIFIED
	LogsPolicy_PATH                                 = src.LogsPolicy_PATH
	TaskStatus_ASSIGNED                             = src.TaskStatus_ASSIGNED
	TaskStatus_FAILED                               = src.TaskStatus_FAILED
	TaskStatus_PENDING                              = src.TaskStatus_PENDING
	TaskStatus_RUNNING                              = src.TaskStatus_RUNNING
	TaskStatus_STATE_UNSPECIFIED                    = src.TaskStatus_STATE_UNSPECIFIED
	TaskStatus_SUCCEEDED                            = src.TaskStatus_SUCCEEDED
)

// Deprecated: Please use vars in: cloud.google.com/go/batch/apiv1/batchpb
var (
	AllocationPolicy_ProvisioningModel_name  = src.AllocationPolicy_ProvisioningModel_name
	AllocationPolicy_ProvisioningModel_value = src.AllocationPolicy_ProvisioningModel_value
	File_google_cloud_batch_v1_batch_proto   = src.File_google_cloud_batch_v1_batch_proto
	File_google_cloud_batch_v1_job_proto     = src.File_google_cloud_batch_v1_job_proto
	File_google_cloud_batch_v1_task_proto    = src.File_google_cloud_batch_v1_task_proto
	File_google_cloud_batch_v1_volume_proto  = src.File_google_cloud_batch_v1_volume_proto
	JobNotification_Type_name                = src.JobNotification_Type_name
	JobNotification_Type_value               = src.JobNotification_Type_value
	JobStatus_State_name                     = src.JobStatus_State_name
	JobStatus_State_value                    = src.JobStatus_State_value
	LifecyclePolicy_Action_name              = src.LifecyclePolicy_Action_name
	LifecyclePolicy_Action_value             = src.LifecyclePolicy_Action_value
	LogsPolicy_Destination_name              = src.LogsPolicy_Destination_name
	LogsPolicy_Destination_value             = src.LogsPolicy_Destination_value
	TaskStatus_State_name                    = src.TaskStatus_State_name
	TaskStatus_State_value                   = src.TaskStatus_State_value
)

// A Job's resource allocation policy describes when, where, and how compute
// resources should be allocated for the Job.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy = src.AllocationPolicy

// Accelerator describes Compute Engine accelerators to be attached to VMs.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_Accelerator = src.AllocationPolicy_Accelerator

// A new or an existing persistent disk or a local ssd attached to a VM
// instance.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_AttachedDisk = src.AllocationPolicy_AttachedDisk
type AllocationPolicy_AttachedDisk_ExistingDisk = src.AllocationPolicy_AttachedDisk_ExistingDisk
type AllocationPolicy_AttachedDisk_NewDisk = src.AllocationPolicy_AttachedDisk_NewDisk

// A new persistent disk or a local ssd. A VM can only have one local SSD
// setting but multiple local SSD partitions.
// https://cloud.google.com/compute/docs/disks#pdspecs.
// https://cloud.google.com/compute/docs/disks#localssds.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_Disk = src.AllocationPolicy_Disk
type AllocationPolicy_Disk_Image = src.AllocationPolicy_Disk_Image
type AllocationPolicy_Disk_Snapshot = src.AllocationPolicy_Disk_Snapshot

// InstancePolicy describes an instance type and resources attached to each VM
// created by this InstancePolicy.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_InstancePolicy = src.AllocationPolicy_InstancePolicy

// Either an InstancePolicy or an instance template.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_InstancePolicyOrTemplate = src.AllocationPolicy_InstancePolicyOrTemplate
type AllocationPolicy_InstancePolicyOrTemplate_InstanceTemplate = src.AllocationPolicy_InstancePolicyOrTemplate_InstanceTemplate
type AllocationPolicy_InstancePolicyOrTemplate_Policy = src.AllocationPolicy_InstancePolicyOrTemplate_Policy
type AllocationPolicy_LocationPolicy = src.AllocationPolicy_LocationPolicy

// A network interface.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_NetworkInterface = src.AllocationPolicy_NetworkInterface

// NetworkPolicy describes VM instance network configurations.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_NetworkPolicy = src.AllocationPolicy_NetworkPolicy

// Compute Engine VM instance provisioning model.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type AllocationPolicy_ProvisioningModel = src.AllocationPolicy_ProvisioningModel

// BatchServiceClient is the client API for BatchService service. For
// semantics around ctx use and closing/ending streaming RPCs, please refer to
// https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type BatchServiceClient = src.BatchServiceClient

// BatchServiceServer is the server API for BatchService service.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type BatchServiceServer = src.BatchServiceServer

// Compute resource requirements
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type ComputeResource = src.ComputeResource

// CreateJob Request.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type CreateJobRequest = src.CreateJobRequest

// DeleteJob Request.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type DeleteJobRequest = src.DeleteJobRequest

// An Environment describes a collection of environment variables to set when
// executing Tasks.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Environment = src.Environment

// Represents a Google Cloud Storage volume source config.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type GCS = src.GCS

// GetJob Request.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type GetJobRequest = src.GetJobRequest

// Request for a single Task by name.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type GetTaskRequest = src.GetTaskRequest

// The Cloud Batch Job description.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Job = src.Job

// Notification configurations.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type JobNotification = src.JobNotification

// Message details. Describe the attribute that a message should have. Without
// specified message attributes, no message will be sent by default.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type JobNotification_Message = src.JobNotification_Message

// The message type.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type JobNotification_Type = src.JobNotification_Type

// Job status.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type JobStatus = src.JobStatus

// VM instance status.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type JobStatus_InstanceStatus = src.JobStatus_InstanceStatus

// Valid Job states.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type JobStatus_State = src.JobStatus_State

// Aggregated task status for a TaskGroup.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type JobStatus_TaskGroupStatus = src.JobStatus_TaskGroupStatus

// LifecyclePolicy describes how to deal with task failures based on different
// conditions.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type LifecyclePolicy = src.LifecyclePolicy

// Action on task failures based on different conditions.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type LifecyclePolicy_Action = src.LifecyclePolicy_Action

// Conditions for actions to deal with task failures.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type LifecyclePolicy_ActionCondition = src.LifecyclePolicy_ActionCondition

// ListJob Request.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type ListJobsRequest = src.ListJobsRequest

// ListJob Response.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type ListJobsResponse = src.ListJobsResponse

// ListTasks Request.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type ListTasksRequest = src.ListTasksRequest

// ListTasks Response.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type ListTasksResponse = src.ListTasksResponse

// LogsPolicy describes how outputs from a Job's Tasks (stdout/stderr) will be
// preserved.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type LogsPolicy = src.LogsPolicy

// The destination (if any) for logs.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type LogsPolicy_Destination = src.LogsPolicy_Destination

// Represents an NFS server and remote path: <server>:<remote_path>
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type NFS = src.NFS

// Represents the metadata of the long-running operation.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type OperationMetadata = src.OperationMetadata

// Runnable describes instructions for executing a specific script or
// container as part of a Task.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Runnable = src.Runnable

// Barrier runnable blocks until all tasks in a taskgroup reach it.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Runnable_Barrier = src.Runnable_Barrier
type Runnable_Barrier_ = src.Runnable_Barrier_

// Container runnable.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Runnable_Container = src.Runnable_Container
type Runnable_Container_ = src.Runnable_Container_

// Script runnable.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Runnable_Script = src.Runnable_Script
type Runnable_Script_ = src.Runnable_Script_
type Runnable_Script_Path = src.Runnable_Script_Path
type Runnable_Script_Text = src.Runnable_Script_Text

// Carries information about a Google Cloud service account.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type ServiceAccount = src.ServiceAccount

// Status event
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type StatusEvent = src.StatusEvent

// A Cloud Batch task.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Task = src.Task

// This Task Execution field includes detail information for task execution
// procedures, based on StatusEvent types.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type TaskExecution = src.TaskExecution

// A TaskGroup contains one or multiple Tasks that share the same Runnable but
// with different runtime parameters.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type TaskGroup = src.TaskGroup

// Spec of a task
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type TaskSpec = src.TaskSpec

// Status of a task
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type TaskStatus = src.TaskStatus

// Task states.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type TaskStatus_State = src.TaskStatus_State

// UnimplementedBatchServiceServer can be embedded to have forward compatible
// implementations.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type UnimplementedBatchServiceServer = src.UnimplementedBatchServiceServer

// Volume and mount parameters to be associated with a TaskSpec. A TaskSpec
// might describe zero, one, or multiple volumes to be mounted as part of the
// task.
//
// Deprecated: Please use types in: cloud.google.com/go/batch/apiv1/batchpb
type Volume = src.Volume
type Volume_DeviceName = src.Volume_DeviceName
type Volume_Gcs = src.Volume_Gcs
type Volume_Nfs = src.Volume_Nfs

// Deprecated: Please use funcs in: cloud.google.com/go/batch/apiv1/batchpb
func NewBatchServiceClient(cc grpc.ClientConnInterface) BatchServiceClient {
	return src.NewBatchServiceClient(cc)
}

// Deprecated: Please use funcs in: cloud.google.com/go/batch/apiv1/batchpb
func RegisterBatchServiceServer(s *grpc.Server, srv BatchServiceServer) {
	src.RegisterBatchServiceServer(s, srv)
}
