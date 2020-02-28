  
/*
 * Copyright 2019-present Infosys Limited  
 *   
 * SPDX-License-Identifier: Apache-2.0    
 */
 
/**************************************
 * serviceRequestStart.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/

#include "smEnumTypes.h"
#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"

#include "mmeStates/serviceRequestStart.h"	
#include "mmeStates/serviceRequestWfAuthResponse.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
ServiceRequestStart::ServiceRequestStart():State(State_e::service_request_start)
{
}

/******************************************************************************
* Destructor
******************************************************************************/
ServiceRequestStart::~ServiceRequestStart()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
ServiceRequestStart* ServiceRequestStart::Instance()
{
        static ServiceRequestStart state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void ServiceRequestStart::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_service_request);
                actionTable.addAction(&ActionHandlers::auth_req_to_ue);
                actionTable.setNextState(ServiceRequestWfAuthResponse::Instance());
                eventToActionsMap.insert(pair<Event_e, ActionTable>(Event_e::SERVICE_REQUEST_FROM_UE, actionTable));
        }
}
