/**
 * Copyright 2015 Comcast Cable Communications Management, LLC
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
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/**
 * @file webpa_internal.h
 *
 * @description This file describes the Webpa Abstraction Layer
 */
#include "ssp_global.h"
#include <stdio.h>
#include "ccsp_dm_api.h"
#include <sys/time.h>
#include "webpa_adapter.h"
#include "webpa_internal.h"

/*----------------------------------------------------------------------------*/
/*                                   Macros                                   */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*                               Data Structures                              */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                             Function Prototypes                            */
/*----------------------------------------------------------------------------*/

/**
 * @brief addRow adds new row to the table
 *
 * param[in] object table name
 * @param[in] CompName Component Name of parameters
 * @param[in] dbusPath dbus path of parameters
 * param[out] retIndex return new row added
 */
int addRow(char *object,char *compName,char *dbusPath,int *retIndex);

/**
 * @brief updateRow updates row data
 *
 * param[in] objectName table name
 * param[in] list Parameter name/value pairs
 * param[out] retObject return new row added
 * param[out] retStatus Returns status
 */
int updateRow(char *objectName,TableData *list,char *compName,char *dbusPath);

/**
 * @brief deleteRow deletes table row
 *
 * param[in] object table name to delete
 */
int deleteRow(char *object);
