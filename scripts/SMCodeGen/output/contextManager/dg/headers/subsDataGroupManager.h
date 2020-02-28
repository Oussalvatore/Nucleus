/*
 * Copyright 2019-present, Infosys Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __SUBS_DATAGROUPMANAGER__
#define __SUBS_DATAGROUPMANAGER__
/**************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/ctxtManagerTmpls/subsDataGroupManager.h.tt>
 ***************************************/
#include <map>
#include <mutex>
#include "dataGroupManager.h"
#include "contextManager/dataBlocks.h"
#include "contextManager/uEContextManager.h"
#include "contextManager/mmContextManager.h"
#include "contextManager/sessionContextManager.h"
#include "contextManager/bearerContextManager.h"
#include "contextManager/mmeProcedureCtxtManager.h"
#include "contextManager/mmeDetachProcedureCtxtManager.h"
#include "contextManager/mmeSvcReqProcedureCtxtManager.h"
#include "contextManager/mmeTauProcedureCtxtManager.h"
namespace mme
{	
	class SubsDataGroupManager:public cmn::DGM::DataGroupManager
	{
		public:
		
			/******************************************
			* Instance 
			*    Creates static instance for the SubsDataGroupManager
			*******************************************/
			static SubsDataGroupManager* Instance();
	
			/****************************************
			* SubsDataGroupManager
			*    Destructor
			****************************************/
			virtual ~SubsDataGroupManager();
			
			/******************************************
			* initialize
			* Initializes control block and pool managers
			******************************************/
			void initialize();

			/******************************************
			 * getUEContext
			 * Get UEContext data block
			 ******************************************/
			UEContext* getUEContext();
			
			/******************************************
			 * deleteUEContext
			 *  Delete a UEContext data block
			 ******************************************/
			void deleteUEContext(UEContext* UEContextp );
			/******************************************
			 * getMmContext
			 * Get MmContext data block
			 ******************************************/
			MmContext* getMmContext();
			
			/******************************************
			 * deleteMmContext
			 *  Delete a MmContext data block
			 ******************************************/
			void deleteMmContext(MmContext* MmContextp );
			/******************************************
			 * getSessionContext
			 * Get SessionContext data block
			 ******************************************/
			SessionContext* getSessionContext();
			
			/******************************************
			 * deleteSessionContext
			 *  Delete a SessionContext data block
			 ******************************************/
			void deleteSessionContext(SessionContext* SessionContextp );
			/******************************************
			 * getBearerContext
			 * Get BearerContext data block
			 ******************************************/
			BearerContext* getBearerContext();
			
			/******************************************
			 * deleteBearerContext
			 *  Delete a BearerContext data block
			 ******************************************/
			void deleteBearerContext(BearerContext* BearerContextp );
			/******************************************
			 * getMmeProcedureCtxt
			 * Get MmeProcedureCtxt data block
			 ******************************************/
			MmeProcedureCtxt* getMmeProcedureCtxt();
			
			/******************************************
			 * deleteMmeProcedureCtxt
			 *  Delete a MmeProcedureCtxt data block
			 ******************************************/
			void deleteMmeProcedureCtxt(MmeProcedureCtxt* MmeProcedureCtxtp );
			/******************************************
			 * getMmeDetachProcedureCtxt
			 * Get MmeDetachProcedureCtxt data block
			 ******************************************/
			MmeDetachProcedureCtxt* getMmeDetachProcedureCtxt();
			
			/******************************************
			 * deleteMmeDetachProcedureCtxt
			 *  Delete a MmeDetachProcedureCtxt data block
			 ******************************************/
			void deleteMmeDetachProcedureCtxt(MmeDetachProcedureCtxt* MmeDetachProcedureCtxtp );
			/******************************************
			 * getMmeSvcReqProcedureCtxt
			 * Get MmeSvcReqProcedureCtxt data block
			 ******************************************/
			MmeSvcReqProcedureCtxt* getMmeSvcReqProcedureCtxt();
			
			/******************************************
			 * deleteMmeSvcReqProcedureCtxt
			 *  Delete a MmeSvcReqProcedureCtxt data block
			 ******************************************/
			void deleteMmeSvcReqProcedureCtxt(MmeSvcReqProcedureCtxt* MmeSvcReqProcedureCtxtp );
			/******************************************
			 * getMmeTauProcedureCtxt
			 * Get MmeTauProcedureCtxt data block
			 ******************************************/
			MmeTauProcedureCtxt* getMmeTauProcedureCtxt();
			
			/******************************************
			 * deleteMmeTauProcedureCtxt
			 *  Delete a MmeTauProcedureCtxt data block
			 ******************************************/
			void deleteMmeTauProcedureCtxt(MmeTauProcedureCtxt* MmeTauProcedureCtxtp );
			
			/******************************************
			* addimsikey
			* Add a imsi as key and cb index as value to imsi_cb_id_map
			******************************************/
			int addimsikey( DigitRegister15 key, int cb_index );
			
			/******************************************
			* deleteimsikey
			* delete a imsi key from imsi_cb_id_map
			******************************************/		
			int deleteimsikey( DigitRegister15 key );
			
			/******************************************
			* findCBWithimsi
			* Find cb with given imsi from imsi_cb_id_map
			******************************************/	
			int findCBWithimsi( DigitRegister15 key );
			/******************************************
			* addmTmsikey
			* Add a mTmsi as key and cb index as value to mTmsi_cb_id_map
			******************************************/
			int addmTmsikey( uint32_t key, int cb_index );
			
			/******************************************
			* deletemTmsikey
			* delete a mTmsi key from mTmsi_cb_id_map
			******************************************/		
			int deletemTmsikey( uint32_t key );
			
			/******************************************
			* findCBWithmTmsi
			* Find cb with given mTmsi from mTmsi_cb_id_map
			******************************************/	
			int findCBWithmTmsi( uint32_t key );
			
			
		private:
			
			/****************************************
			* SubsDataGroupManager
			*    Private constructor
			****************************************/
			SubsDataGroupManager();  
			
			/****************************************
			* UEContext Pool Manager
			****************************************/
			UEContextManager* UEContextManagerm_p;
			
			/****************************************
			* MmContext Pool Manager
			****************************************/
			MmContextManager* MmContextManagerm_p;
			
			/****************************************
			* SessionContext Pool Manager
			****************************************/
			SessionContextManager* SessionContextManagerm_p;
			
			/****************************************
			* BearerContext Pool Manager
			****************************************/
			BearerContextManager* BearerContextManagerm_p;
			
			/****************************************
			* MmeProcedureCtxt Pool Manager
			****************************************/
			MmeProcedureCtxtManager* MmeProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeDetachProcedureCtxt Pool Manager
			****************************************/
			MmeDetachProcedureCtxtManager* MmeDetachProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeSvcReqProcedureCtxt Pool Manager
			****************************************/
			MmeSvcReqProcedureCtxtManager* MmeSvcReqProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeTauProcedureCtxt Pool Manager
			****************************************/
			MmeTauProcedureCtxtManager* MmeTauProcedureCtxtManagerm_p;
			
			
			/****************************************
			* imsi Key Map
			****************************************/
			std::map<DigitRegister15,int> imsi_cb_id_map;
			
			/****************************************
			* imsi Key Map
			****************************************/
			std::mutex imsi_cb_id_map_mutex;
			/****************************************
			* mTmsi Key Map
			****************************************/
			std::map<uint32_t,int> mTmsi_cb_id_map;
			
			/****************************************
			* mTmsi Key Map
			****************************************/
			std::mutex mTmsi_cb_id_map_mutex;
	};
};


#endif