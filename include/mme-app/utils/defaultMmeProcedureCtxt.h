/*
 * Copyright (c) 2019, Infosys Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INCLUDE_MME_APP_UTILS_DEFAULTMMEPROCEDURECTXT_H_
#define INCLUDE_MME_APP_UTILS_DEFAULTMMEPROCEDURECTXT_H_

#include <contextManager/dataBlocks.h>

namespace mme
{
class DefaultMmeProcedureCtxt : public MmeProcedureCtxt
{
public:
    static DefaultMmeProcedureCtxt* Instance();

private:
    DefaultMmeProcedureCtxt();
    ~DefaultMmeProcedureCtxt();
};
}



#endif /* INCLUDE_MME_APP_UTILS_DEFAULTMMEPROCEDURECTXT_H_ */
