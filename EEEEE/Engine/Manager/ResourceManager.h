//
//  ResourceManager.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef ResourceManager_h
#define ResourceManager_h

#include "Engine/Manager/BaseManager.h"
#include "Engine/Config/ResourceConfig.h"

class ResourceManager : public BaseManager
{
public:
    ResourceManager();
    ~ResourceManager();
    
    virtual void SetConfig(const ResourceConfig& newConfig);
    
private:
    ResourceConfig m_ResourceConfig;
};

#endif /* ResourceManager_hpp */
