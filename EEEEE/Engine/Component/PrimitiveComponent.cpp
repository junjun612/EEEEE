//
//  PrimitiveComponent.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "PrimitiveComponent.h"

PrimitiveComponent::PrimitiveComponent()
{
    m_VertexList.empty();
}

PrimitiveComponent::~PrimitiveComponent()
{
    
}

const std::vector<Vertex>& PrimitiveComponent::GetVertexList() const
{
    return m_VertexList;
}
