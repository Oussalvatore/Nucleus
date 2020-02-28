  
/*
 * Copyright 2019-present Infosys Limited  
 *   
 * SPDX-License-Identifier: Apache-2.0    
 */
 
/**************************************
 * attachWfCsResp.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/

#include "smEnumTypes.h"
#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"

#include "mmeStates/attachWfCsResp.h"	
#include "mmeStates/attachWfInitCtxtRespAttCmp.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
AttachWfCsResp::AttachWfCsResp():State(State_e::attach_wf_cs_resp)
{
}

/******************************************************************************
* Destructor
******************************************************************************/
AttachWfCsResp::~AttachWfCsResp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
AttachWfCsResp* AttachWfCsResp::Instance()
{
        static AttachWfCsResp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void AttachWfCsResp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_cs_resp);
                actionTable.addAction(&ActionHandlers::send_init_ctxt_req_to_ue);
                actionTable.setNextState(AttachWfInitCtxtRespAttCmp::Instance());
                eventToActionsMap.insert(pair<Event_e, ActionTable>(Event_e::CS_RESP_FROM_SGW, actionTable));
        }
}
