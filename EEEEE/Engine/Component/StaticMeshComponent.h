//
//  StaticMeshComponent.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef StaticMeshComponent_h
#define StaticMeshComponent_h

#include "Engine/Component/PrimitiveComponent.h"

class StaticMesh;
class StaticMeshComponent : public PrimitiveComponent
{
public:
    StaticMeshComponent();
    virtual ~StaticMeshComponent();
    
    virtual const std::vector<Vertex>& GetVertexList() const;
    
    void SetStaticMesh(StaticMesh* pStaticMesh);
    StaticMesh* GetStaticMesh() const;
    
protected:
    StaticMesh* m_pStaticMesh;
};

#endif /* StaticMeshComponent_hpp */
