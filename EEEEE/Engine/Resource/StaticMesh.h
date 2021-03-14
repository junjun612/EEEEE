//
//  StaticMesh.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef StaticMesh_h
#define StaticMesh_h

#include "Engine/Resource/Resource.h"
#include "Engine/Component/PrimitiveComponent.h"

class StaticMesh : public Resource
{
public:
    StaticMesh();
    virtual ~StaticMesh();
    
    void SetVertexList(const std::vector<Vertex>& list);
    const std::vector<Vertex>& GetVertexList() const;
    
protected:
    std::vector<Vertex> m_VertexList;
    
};

#endif /* StaticMesh_h */
