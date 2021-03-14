//
//  StaticMesh.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "StaticMesh.h"

StaticMesh::StaticMesh()
{
    m_VertexList.empty();
}

StaticMesh::~StaticMesh()
{
    
}

void StaticMesh::SetVertexList(const std::vector<Vertex>& list)
{
    m_VertexList = list;
}

const std::vector<Vertex>& StaticMesh::GetVertexList() const
{
    return m_VertexList;
}
