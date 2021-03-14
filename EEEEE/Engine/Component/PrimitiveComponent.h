//
//  PrimitiveComponent.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef PrimitiveComponent_h
#define PrimitiveComponent_h

#include "Engine/Component/SceneComponent.h"

struct Vertex
{
    Vector location;
};

class PrimitiveComponent : public SceneComponent
{
public:
    PrimitiveComponent();
    virtual ~PrimitiveComponent();
    
    virtual const std::vector<Vertex>& GetVertexList() const;
    
protected:
    std::vector<Vertex> m_VertexList;
};

#endif /* PrimitiveComponent_hpp */
