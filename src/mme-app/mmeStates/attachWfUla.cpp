  
/*
 * Copyright 2019-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * attachWfUla.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/

#include "mmeSmDefs.h"
#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"

#include "mmeStates/attachWfUla.h"	
#include "mmeStates/attachWfCsResp.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
AttachWfUla::AttachWfUla():State(attach_wf_ula)
{
}

/******************************************************************************
* Destructor
******************************************************************************/
AttachWfUla::~AttachWfUla()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
AttachWfUla* AttachWfUla::Instance()
{
        static AttachWfUla state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void AttachWfUla::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_ula);
                actionTable.addAction(&ActionHandlers::cs_req_to_sgw);
                actionTable.setNextState(AttachWfCsResp::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(ULA_FROM_HSS, actionTable));
        }
}
