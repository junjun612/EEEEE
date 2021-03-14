//
//  Root.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "Root.h"
#include "Manager/BaseManager.h"

Root::Root()
{
    m_Arguments = Arguments();
    m_Config = EngineConfig();
}

Root::~Root()
{
    
}

void Root::Construct(const Arguments& Args)
{
    // Arguments 초기화
    m_Arguments = Args;
}

void Root::Initialize()
{
    for (BaseManager* pManager : m_ManagerList)
    {
        pManager->Initialize();
    }
}

const Arguments& Root::GetArguments() const
{
    return m_Arguments;
}

const EngineConfig& Root::GetConfig() const
{
    return m_Config;
}