//
//  ClientApp.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "ClientApp.h"
#include "Engine/Root.h"
#include "Engine/Manager/ResourceManager.h"
#include "Engine/Manager/RenderManager.h"

#include "Engine/Game/World/World.h"
#include "Engine/Actor/Actor.h"
#include "Engine/Resource/StaticMesh.h"

ClientApp::ClientApp()
{
    m_pRoot = nullptr;
    m_bShouldQuit = false;
}

ClientApp::~ClientApp()
{
    
}

bool ClientApp::Initialize(const Arguments& args)
{
    if (false == Initialize_Engine(args))
        return false;
    
    if (false == Initialize_Game(args))
        return false;
    
    return true;
}

bool ClientApp::Run()
{
    while (false == m_bShouldQuit)
    {
        if (false == m_pRoot->Tick())
            return false;
    }
    
    return true;
}

bool ClientApp::Initialize_Engine(const Arguments& args)
{
    m_pRoot = Root::Get();
    m_pRoot->Construct(args);
 
    ResourceConfig resourceConfig;
    resourceConfig.contentPath = "../../Content/";
    resourceConfig.configPath = "../../Config/";
    m_pRoot->GetManager<ResourceManager>()->SetConfig(resourceConfig);
    
    RenderConfig renderConfig;
    renderConfig.rendererType = ERendererType::RT_OPENGL;
    m_pRoot->GetManager<RenderManager>()->SetConfig(renderConfig);
    
    m_pRoot->Initialize();
    return true;
}

bool ClientApp::Initialize_Game(const Arguments& args)
{
    // 테스트용 메쉬
    Vertex v1;
    v1.location = Vector(0.0f, 1.0f, 0.0f);
    
    Vertex v2;
    v2.location = Vector(1.0f, -1.0f, 0.0f);
    
    Vertex v3;
    v3.location = Vector(-1.0f, -1.0f, 0.0f);
    
    StaticMesh* pMesh = new StaticMesh();
    pMesh->SetVertexList({ v1, v2, v3 });
    
    // 추가
    Actor* pActor = new Actor();
    m_pRoot->GetWorld()->AddActor(pActor);
    
    return true;
}
