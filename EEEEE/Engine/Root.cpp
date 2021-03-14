//
//  Root.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "Root.h"
#include "Engine/Manager/ResourceManager.h"
#include "Engine/Manager/RenderManager.h"
#include "Engine/Game/World/World.h"
#include "Engine/Actor/Actor.h"

Root::Root()
{
    m_Arguments = Arguments();
    m_Config = EngineConfig();

    m_ManagerList.empty();
    m_pWorld = nullptr;
}

Root::~Root()
{
    
}

void Root::Construct(const Arguments& Args)
{
    // Arguments 초기화
    m_Arguments = Args;
    
    // Manager 추가
    AddManager<ResourceManager>();
    AddManager<RenderManager>();
}

void Root::Initialize()
{
    for (BaseManager* pManager : m_ManagerList)
    {
        pManager->Initialize();
    }
    
    // World 초기화
    m_pWorld = new World();
}

bool Root::Tick()
{
    // Actor Tick
    for (Actor* pActor : m_pWorld->GetActorList())
    {
        if (nullptr == pActor)
            continue;
        
        pActor->Tick();
    }
    
    // Render Tick
    RenderManager* pRenderManager = GetManager<RenderManager>();
    if (nullptr != pRenderManager)
    {
        BaseRenderer* pRenderer = pRenderManager->GetRenderer();
        if (nullptr == pRenderer)
            return false;
        
        pRenderer->RenderFrame();
    }
    
    return true;
}

const Arguments& Root::GetArguments() const
{
    return m_Arguments;
}

const EngineConfig& Root::GetConfig() const
{
    return m_Config;
}

World* Root::GetWorld() const
{
    return m_pWorld;
}
