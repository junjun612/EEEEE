//
//  StaticMeshComponent.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "StaticMeshComponent.h"
#include "Engine/Resource/StaticMesh.h"

StaticMeshComponent::StaticMeshComponent()
{
    m_pStaticMesh = nullptr;
}

StaticMeshComponent::~StaticMeshComponent()
{
    
}
const std::vector<Vertex>& StaticMeshComponent::GetVertexList() const
{
    if (nullptr == m_pStaticMesh)
    {
        static std::vector<Vertex> EMPTY_VERTEX_LIST;
        return EMPTY_VERTEX_LIST;
    }
    
    return m_pStaticMesh->GetVertexList();
}

void StaticMeshComponent::SetStaticMesh(StaticMesh* pStaticMesh)
{
    m_pStaticMesh = pStaticMesh;
}

StaticMesh* StaticMeshComponent::GetStaticMesh() const
{
    return m_pStaticMesh;
}
