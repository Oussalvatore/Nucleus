  
/*
 * Copyright 2019-present Infosys Limited  
 *   
 * SPDX-License-Identifier: Apache-2.0    
 */
 
/**************************************
 * tauStart.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/

#include "smEnumTypes.h"
#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"

#include "mmeStates/tauStart.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
TauStart::TauStart():State(State_e::tau_start)
{
}

/******************************************************************************
* Destructor
******************************************************************************/
TauStart::~TauStart()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
TauStart* TauStart::Instance()
{
        static TauStart state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void TauStart::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::send_tau_response_to_ue);
                eventToActionsMap.insert(pair<Event_e, ActionTable>(Event_e::TAU_REQUEST_FROM_UE, actionTable));
        }
}
