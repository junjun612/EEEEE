//
//  BaseRenderer.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef BaseRenderer_h
#define BaseRenderer_h

#include "Engine/Common/Engine.h"

class PrimitiveComponent;

class BaseRenderer
{
public:
    BaseRenderer();
    virtual ~BaseRenderer();
    
    virtual bool Initialize();
    virtual void End();
    virtual void RenderFrame();
    
protected:
    void CollectRenderable();
    
private:
    std::queue <PrimitiveComponent*> m_RenderableList;
};

#endif /* BaseRenderer_hpp */
