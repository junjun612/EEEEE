//
//  EngineConfig.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef EngineConfig_h
#define EngineConfig_h

#include "Engine/Common/Engine.h"

struct EngineConfig
{
    EngineConfig()
    {
        titleName = "EEEEE";
        windowWidth = 1280;
        windowHeight = 720;
    }
    
    std::string titleName;
    int windowWidth;
    int windowHeight;
};

#endif /* EngineConfig_h */
