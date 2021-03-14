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

ClientApp::ClientApp()
{
    m_pRoot = nullptr;
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
    return true;
}
