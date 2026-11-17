/*
 * If not stated otherwise in this file or this component's Licenses.txt file the
 * following copyright and licenses apply:
 *
 * Copyright 2026 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

/**********************************************************************
   Copyright [2026] [Cisco Systems, Inc.]
 
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
 
       http://www.apache.org/licenses/LICENSE-2.0
 
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
**********************************************************************/
/**
 * @file webpa_method.h
 *
 * @description This header defines the WebPA cloud-to-CPE RPC method
 *              invocation path triggered by the reserved RDK.Operate
 *              PATCH/SET parameter.
 *
 * Copyright (c) 2026  Comcast
 */

#ifndef _WEBPA_METHOD_H_
#define _WEBPA_METHOD_H_

#include <stdbool.h>
#include <wdmp-c.h>

/**
 * @brief Reserved WebPA parameter name that signals a method invocation.
 */
#define RDK_OPERATE_PARAM                  "RDK.Operate"

/* JSON-RPC style error codes carried inside the Base64-encoded message. */
#define METHOD_ERR_PARSE                   (-32700)
#define METHOD_ERR_INVALID_REQUEST         (-32600)
#define METHOD_ERR_METHOD_NOT_FOUND        (-32601)
#define METHOD_ERR_INVALID_PARAMS          (-32602)
#define METHOD_ERR_INTERNAL                (-32603)

/**
 * @brief isMethodInvokeRequest detects whether a SET request should be routed
 *        to method-invocation handling.
 *
 * The current check is strict about shape and identifier only: the request
 * must contain a parameter named RDK.Operate.
 *
 * @param[in] setReq parsed SET request
 * @return true when setReq has a parameter named RDK.Operate
 */
bool isMethodInvokeRequest(set_req_t *setReq);

/**
 * @brief handleMethodInvoke decodes the RDK.Operate operate payload, invokes
 *        the target RBUS method synchronously and fills the WDMP response
 *        structure consumed by wdmp_form_response.
 *
 * @param[in]  setReq parsed SET request carrying the RDK.Operate parameter
 * @param[out] resObj response structure to be populated
 */
void handleMethodInvoke(set_req_t *setReq, res_struct *resObj);

#endif
