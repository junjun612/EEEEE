//
//  RenderManager.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "RenderManager.h"
#include "Engine/Render/Renderer_OpenGL/Renderer_OpenGL.h"

RenderManager::RenderManager()
{
    m_RenderConfig = RenderConfig();
    m_pRenderer = nullptr;
}

RenderManager::~RenderManager()
{
    
}

void RenderManager::SetConfig(const RenderConfig& newConfig)
{
    m_RenderConfig = newConfig;
}

bool RenderManager::Initialize()
{
    switch (m_RenderConfig.rendererType)
    {
        case ERendererType::RT_OPENGL:
            m_pRenderer = new Renderer_OpenGL();
            break;
            
        default:
            break;
    }
    
    va_assert(m_pRenderer, false, "렌더러가 존재하지 않습니다.");
    
    if (false == m_pRenderer->Initialize())
        return false;
    
    return true;
}
