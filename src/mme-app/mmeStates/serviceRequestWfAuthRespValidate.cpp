  
/*
 * Copyright 2019-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * serviceRequestWfAuthRespValidate.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/

#include "mmeSmDefs.h"
#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"

#include "mmeStates/serviceRequestWfAuthRespValidate.h"	
#include "mmeStates/serviceRequestWfSecCmp.h"	
#include "mmeStates/serviceRequestWfAia.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
ServiceRequestWfAuthRespValidate::ServiceRequestWfAuthRespValidate():State(service_request_wf_auth_resp_validate)
{
}

/******************************************************************************
* Destructor
******************************************************************************/
ServiceRequestWfAuthRespValidate::~ServiceRequestWfAuthRespValidate()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
ServiceRequestWfAuthRespValidate* ServiceRequestWfAuthRespValidate::Instance()
{
        static ServiceRequestWfAuthRespValidate state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void ServiceRequestWfAuthRespValidate::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::sec_mode_cmd_to_ue);
                actionTable.setNextState(ServiceRequestWfSecCmp::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(AUTH_RESP_SUCCESS, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::send_air_to_hss);
                actionTable.setNextState(ServiceRequestWfAia::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(AUTH_RESP_SYNC_FAILURE, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::send_s1_rel_cmd_to_ue);
                actionTable.addAction(&ActionHandlers::abort_service_req_procedure);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(AUTH_RESP_FAILURE, actionTable));
        }
}
