  
/*
 * Copyright 2019-present Infosys Limited  
 *   
 * SPDX-License-Identifier: Apache-2.0    
 */
 
/**************************************
 * niDetachWfS1RelComp.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/

#include "smEnumTypes.h"
#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"

#include "mmeStates/niDetachWfS1RelComp.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
NiDetachWfS1RelComp::NiDetachWfS1RelComp():State(State_e::ni_detach_wf_s1_rel_comp)
{
}

/******************************************************************************
* Destructor
******************************************************************************/
NiDetachWfS1RelComp::~NiDetachWfS1RelComp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
NiDetachWfS1RelComp* NiDetachWfS1RelComp::Instance()
{
        static NiDetachWfS1RelComp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void NiDetachWfS1RelComp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_ue_ctxt_rel_comp_for_detach);
                eventToActionsMap.insert(pair<Event_e, ActionTable>(Event_e::UE_CTXT_REL_COMP_FROM_ENB, actionTable));
        }
}
