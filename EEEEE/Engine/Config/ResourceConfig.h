//
//  ResourceConfig.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef ResourceConfig_h
#define ResourceConfig_h

#include "Engine/Common/Engine.h"

struct ResourceConfig
{
    ResourceConfig()
    {
        contentPath = "./";
        configPath = "./";
    }
    
    std::string contentPath;
    std::string configPath;
};

#endif /* ResourceConfig_h */
