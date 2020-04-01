/*
 * Copyright 2019-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/ctxtManagerTmpls/subsDataGroupManager.cpp.tt>
 ***************************************/
#include "contextManager/subsDataGroupManager.h"
#include "log.h"
#include "mmeStates/defaultMmeState.h"
#include <sstream>

namespace mme
{
	/******************************************************************************
	* Constructor
	******************************************************************************/
	SubsDataGroupManager::SubsDataGroupManager()
	{
			UEContextManagerm_p = NULL;
			MmContextManagerm_p = NULL;
			SessionContextManagerm_p = NULL;
			BearerContextManagerm_p = NULL;
			MmeProcedureCtxtManagerm_p = NULL;
			MmeAttachProcedureCtxtManagerm_p = NULL;
			MmeDetachProcedureCtxtManagerm_p = NULL;
			MmeS1RelProcedureCtxtManagerm_p = NULL;
			MmeSvcReqProcedureCtxtManagerm_p = NULL;
			MmeTauProcedureCtxtManagerm_p = NULL;

			initialize();
	}
	
	/******************************************************************************
	* Destructor
	******************************************************************************/
	SubsDataGroupManager::~SubsDataGroupManager()
	{
			delete UEContextManagerm_p;
			delete MmContextManagerm_p;
			delete SessionContextManagerm_p;
			delete BearerContextManagerm_p;
			delete MmeProcedureCtxtManagerm_p;
			delete MmeAttachProcedureCtxtManagerm_p;
			delete MmeDetachProcedureCtxtManagerm_p;
			delete MmeS1RelProcedureCtxtManagerm_p;
			delete MmeSvcReqProcedureCtxtManagerm_p;
			delete MmeTauProcedureCtxtManagerm_p;
	}
	
	/******************************************
	*  Initializes control block and pool managers
	******************************************/
	void SubsDataGroupManager::initialize()
	{
		initializeCBStore(8000);

		UEContextManagerm_p = new UEContextManager(8000);
		MmContextManagerm_p = new MmContextManager(8000);
		SessionContextManagerm_p = new SessionContextManager(8000);
		BearerContextManagerm_p = new BearerContextManager(8000);
		MmeProcedureCtxtManagerm_p = new MmeProcedureCtxtManager(8000);
		MmeAttachProcedureCtxtManagerm_p = new MmeAttachProcedureCtxtManager(8000);
		MmeDetachProcedureCtxtManagerm_p = new MmeDetachProcedureCtxtManager(8000);
		MmeS1RelProcedureCtxtManagerm_p = new MmeS1RelProcedureCtxtManager(8000);
		MmeSvcReqProcedureCtxtManagerm_p = new MmeSvcReqProcedureCtxtManager(8000);
		MmeTauProcedureCtxtManagerm_p = new MmeTauProcedureCtxtManager(8000);
	}
	
	/******************************************************************************
	* creates and returns static instance
	******************************************************************************/
	SubsDataGroupManager* SubsDataGroupManager::Instance()
	{
			static SubsDataGroupManager subDataGroupMgr;
			return &subDataGroupMgr;
	}

	UEContext* SubsDataGroupManager::getUEContext()
	{
		return UEContextManagerm_p->allocateUEContext();
	}

	void SubsDataGroupManager::deleteUEContext(UEContext* UEContextp )
	{
		UEContextManagerm_p->deallocateUEContext( UEContextp );
	}
	MmContext* SubsDataGroupManager::getMmContext()
	{
		return MmContextManagerm_p->allocateMmContext();
	}

	void SubsDataGroupManager::deleteMmContext(MmContext* MmContextp )
	{
		MmContextManagerm_p->deallocateMmContext( MmContextp );
	}
	SessionContext* SubsDataGroupManager::getSessionContext()
	{
		return SessionContextManagerm_p->allocateSessionContext();
	}

	void SubsDataGroupManager::deleteSessionContext(SessionContext* SessionContextp )
	{
		SessionContextManagerm_p->deallocateSessionContext( SessionContextp );
	}
	BearerContext* SubsDataGroupManager::getBearerContext()
	{
		return BearerContextManagerm_p->allocateBearerContext();
	}

	void SubsDataGroupManager::deleteBearerContext(BearerContext* BearerContextp )
	{
		BearerContextManagerm_p->deallocateBearerContext( BearerContextp );
	}
	MmeProcedureCtxt* SubsDataGroupManager::getMmeProcedureCtxt()
	{
		return MmeProcedureCtxtManagerm_p->allocateMmeProcedureCtxt();
	}

	void SubsDataGroupManager::deleteMmeProcedureCtxt(MmeProcedureCtxt* MmeProcedureCtxtp )
	{
		MmeProcedureCtxtManagerm_p->deallocateMmeProcedureCtxt( MmeProcedureCtxtp );
	}
	MmeAttachProcedureCtxt* SubsDataGroupManager::getMmeAttachProcedureCtxt()
	{
		return MmeAttachProcedureCtxtManagerm_p->allocateMmeAttachProcedureCtxt();
	}

	void SubsDataGroupManager::deleteMmeAttachProcedureCtxt(MmeAttachProcedureCtxt* MmeAttachProcedureCtxtp )
	{
		MmeAttachProcedureCtxtManagerm_p->deallocateMmeAttachProcedureCtxt( MmeAttachProcedureCtxtp );
	}
	MmeDetachProcedureCtxt* SubsDataGroupManager::getMmeDetachProcedureCtxt()
	{
		return MmeDetachProcedureCtxtManagerm_p->allocateMmeDetachProcedureCtxt();
	}

	void SubsDataGroupManager::deleteMmeDetachProcedureCtxt(MmeDetachProcedureCtxt* MmeDetachProcedureCtxtp )
	{
		MmeDetachProcedureCtxtManagerm_p->deallocateMmeDetachProcedureCtxt( MmeDetachProcedureCtxtp );
	}
	MmeS1RelProcedureCtxt* SubsDataGroupManager::getMmeS1RelProcedureCtxt()
	{
		return MmeS1RelProcedureCtxtManagerm_p->allocateMmeS1RelProcedureCtxt();
	}

	void SubsDataGroupManager::deleteMmeS1RelProcedureCtxt(MmeS1RelProcedureCtxt* MmeS1RelProcedureCtxtp )
	{
		MmeS1RelProcedureCtxtManagerm_p->deallocateMmeS1RelProcedureCtxt( MmeS1RelProcedureCtxtp );
	}
	MmeSvcReqProcedureCtxt* SubsDataGroupManager::getMmeSvcReqProcedureCtxt()
	{
		return MmeSvcReqProcedureCtxtManagerm_p->allocateMmeSvcReqProcedureCtxt();
	}

	void SubsDataGroupManager::deleteMmeSvcReqProcedureCtxt(MmeSvcReqProcedureCtxt* MmeSvcReqProcedureCtxtp )
	{
		MmeSvcReqProcedureCtxtManagerm_p->deallocateMmeSvcReqProcedureCtxt( MmeSvcReqProcedureCtxtp );
	}
	MmeTauProcedureCtxt* SubsDataGroupManager::getMmeTauProcedureCtxt()
	{
		return MmeTauProcedureCtxtManagerm_p->allocateMmeTauProcedureCtxt();
	}

	void SubsDataGroupManager::deleteMmeTauProcedureCtxt(MmeTauProcedureCtxt* MmeTauProcedureCtxtp )
	{
		MmeTauProcedureCtxtManagerm_p->deallocateMmeTauProcedureCtxt( MmeTauProcedureCtxtp );
	}
	
	/******************************************
	* Add a imsi as key and cb index as value to imsi_cb_id_map
	******************************************/
	int SubsDataGroupManager::addimsikey( DigitRegister15 key, int cb_index )
	{
		std::lock_guard<std::mutex> lock(imsi_cb_id_map_mutex);

		int rc = 1;

		auto itr = imsi_cb_id_map.insert(std::pair<DigitRegister15, int>( key, cb_index ));
		if (itr.second == false)
		{
			rc = -1;
		}
		return rc;
	}
	
	/******************************************
	* Delete a imsi key from imsi_cb_id_map
	******************************************/
	int SubsDataGroupManager::deleteimsikey( DigitRegister15 key )
	{
		std::lock_guard<std::mutex> lock(imsi_cb_id_map_mutex);
 
		return imsi_cb_id_map.erase( key );
	}
	
	/******************************************
	* Find cb with given imsi from imsi_cb_id_map
	* returns -1 if not found, else cb index
	******************************************/ 
	int SubsDataGroupManager::findCBWithimsi( DigitRegister15 key )
	{
		std::lock_guard<std::mutex> lock(imsi_cb_id_map_mutex);
        
		auto itr = imsi_cb_id_map.find( key );
		if( itr != imsi_cb_id_map.end())
		{
			return itr->second;
		}
		return -1;
	}
	/******************************************
	* Add a mTmsi as key and cb index as value to mTmsi_cb_id_map
	******************************************/
	int SubsDataGroupManager::addmTmsikey( uint32_t key, int cb_index )
	{
		std::lock_guard<std::mutex> lock(mTmsi_cb_id_map_mutex);

		int rc = 1;

		auto itr = mTmsi_cb_id_map.insert(std::pair<uint32_t, int>( key, cb_index ));
		if (itr.second == false)
		{
			rc = -1;
		}
		return rc;
	}
	
	/******************************************
	* Delete a mTmsi key from mTmsi_cb_id_map
	******************************************/
	int SubsDataGroupManager::deletemTmsikey( uint32_t key )
	{
		std::lock_guard<std::mutex> lock(mTmsi_cb_id_map_mutex);
 
		return mTmsi_cb_id_map.erase( key );
	}
	
	/******************************************
	* Find cb with given mTmsi from mTmsi_cb_id_map
	* returns -1 if not found, else cb index
	******************************************/ 
	int SubsDataGroupManager::findCBWithmTmsi( uint32_t key )
	{
		std::lock_guard<std::mutex> lock(mTmsi_cb_id_map_mutex);
        
		auto itr = mTmsi_cb_id_map.find( key );
		if( itr != mTmsi_cb_id_map.end())
		{
			return itr->second;
		}
		return -1;
	}
}