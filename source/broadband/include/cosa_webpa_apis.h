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
 * @file cosa_webpa_apis.h
 *
 * @description This file describes the Webpa DML layer 
 *
 * Copyright (c) 2016  Comcast
 */

#ifndef  _COSA_WEBPA_APIS_H
#define  _COSA_WEBPA_APIS_H

#include "slap_definitions.h"

/*
 *  Dynamic portion of WEBPA Configuration
 */
struct
_COSA_DML_WEBPA_CONFIG
{
  UINT  X_COMCAST_COM_CMC;
  CHAR  X_COMCAST_COM_CID[64];
  CHAR  X_COMCAST_COM_SyncProtocolVersion[64];
  CHAR  WEBPA_Server_URL[64];
  CHAR  TOKEN_Server_URL[64];
  CHAR  DNS_Text_URL[64];
}_struct_pack_;

typedef  struct _COSA_DML_WEBPA_CONFIG COSA_DML_WEBPA_CONFIG,  *PCOSA_DML_WEBPA_CONFIG;

/**********************************************************************
                FUNCTION PROTOTYPES
**********************************************************************/

BOOL    
CosaDmlWEBPA_GetConfiguration( PCOSA_DML_WEBPA_CONFIG  pWebpaCfg );

BOOL    
CosaDmlWEBPA_SetConfiguration( PCOSA_DML_WEBPA_CONFIG  pWebpaCfg, char* ParamName, void* pvParamValue );

BOOL 
CosaDmlWEBPA_GetValueFromDB( char* ParamName, char* pString );

BOOL 
CosaDmlWEBPA_StoreValueIntoDB( char* ParamName, char* pString );

BOOL
CosaDml_GetValueFromPSMDB ( char* ParamName, char* pString );
#endif /* _COSA_WEBPA_APIS_H */
