//
//  Renderer_OpenGL.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef Renderer_OpenGL_h
#define Renderer_OpenGL_h

#include "Engine/Render/BaseRenderer.h"
#include "Engine/Render/Renderer_OpenGL/OpenGL.h"

class Renderer_OpenGL : public BaseRenderer
{
public:
    Renderer_OpenGL();
    virtual ~Renderer_OpenGL();
    
    virtual bool Initialize() override;
    virtual void End()  override;
    virtual void RenderFrame()  override;
};

#endif /* Renderer_OpenGL_hpp */
