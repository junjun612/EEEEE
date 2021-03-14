//
//  RenderConfig.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef RenderConfig_h
#define RenderConfig_h

enum class ERendererType : char
{
    RT_OPENGL,
    
    RT_MAX
};

struct RenderConfig
{
    RenderConfig()
    {
        rendererType = ERendererType::RT_OPENGL;
    }
    
    ERendererType rendererType;
};

#endif /* RenderConfig_h */
