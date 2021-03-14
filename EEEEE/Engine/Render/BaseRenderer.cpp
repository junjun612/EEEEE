//
//  BaseRenderer.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "BaseRenderer.h"
#include "Engine/Root.h"
#include "Engine/Game/World/World.h"
#include "Engine/Actor/Actor.h"
#include "Engine/Component/PrimitiveComponent.h"

BaseRenderer::BaseRenderer()
{
    m_RenderableList.empty();
}

BaseRenderer::~BaseRenderer()
{
    
}

bool BaseRenderer::Initialize()
{
    return true;
}

void BaseRenderer::End()
{
    
}

void BaseRenderer::RenderFrame()
{
    CollectRenderable();
    
    while (false == m_RenderableList.empty())
    {
        PrimitiveComponent* pRenderable = m_RenderableList.front();
        m_RenderableList.pop();
        
        if (nullptr == pRenderable)
            continue;
        
        const std::vector<Vertex>& vertexList = pRenderable->GetVertexList();
        vertexList;
    }
}

void BaseRenderer::CollectRenderable()
{
    World* pWorld = Root::Get()->GetWorld();
    if (nullptr == pWorld)
        return;
    
    for (Actor* pActor : pWorld->GetActorList())
    {
        std::vector<ActorComponent*> componentList;
        pActor->GetComponents<ActorComponent>(componentList);
        
        for (ActorComponent* pComponent : componentList)
        {
            PrimitiveComponent* pRenderable = dynamic_cast<PrimitiveComponent*>(pComponent);
            if (nullptr == pRenderable)
                continue;
            
            m_RenderableList.push(pRenderable);
        }
    }
}
