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
 * @file cosa_webpa_internal.h
 *
 * @description This file describes the Webpa intilization
 *
 * Copyright (c) 2016  Comcast
 */
 
#ifndef  _COSA_WEBPA_INTERNAL_H
#define  _COSA_WEBPA_INTERNAL_H
#include "cosa_webpa_apis.h"

/* Collection */
typedef  struct
_COSA_DML_WEBPA
{
	PCOSA_DML_WEBPA_CONFIG           pWebpaCfg; 
}
COSA_DML_WEBPA, *PCOSA_DML_WEBPA;

#define  COSA_DATAMODEL_WEBPA_CLASS_CONTENT                                                  \
    /* start of WEBPA object class content */                                                \
	PCOSA_DML_WEBPA					pWebpa;

typedef  struct
_COSA_DATAMODEL_WEBPA                                               
{
	COSA_DATAMODEL_WEBPA_CLASS_CONTENT
}
COSA_DATAMODEL_WEBPA,  *PCOSA_DATAMODEL_WEBPA;

/*
    Standard function declaration 
*/

ANSC_HANDLE
CosaWebpaCreate
    (
        VOID
    );

ANSC_STATUS
CosaWebpaInitialize
    (
        ANSC_HANDLE                 hThisObject
    );

VOID
CosaWebpaSyncDB
    (
        VOID
    );

ANSC_STATUS
CosaWebpaRemove
    (
        ANSC_HANDLE                 hThisObject
    );
#endif /* _COSA_WEBPA_INTERNAL_H */
