/*
* This source file is part of ArkGameFrame
* For the latest info, see https://github.com/ArkGame
*
* Copyright (c) 2013-2018 ArkGame authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

#pragma once

#include "Contrib/Interface/AFIProcModule.h"

class AFCProcModule : public AFIProcModule
{
public:
    explicit AFCProcModule(AFIPluginManager* p);
    virtual ~AFCProcModule() = default;

    virtual const std::string& GetProcName(const ARK_PROCESS_TYPE& type);
    virtual const ARK_PROCESS_TYPE& GetProcType(const std::string& proc_name);

protected:
    bool InitProcNames();

private:
    std::map<ARK_PROCESS_TYPE, std::string> mxProcNames;
    std::map<std::string, ARK_PROCESS_TYPE> mxProcTypes;
};