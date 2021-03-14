//
//  BaseManager.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef BaseManager_h
#define BaseManager_h

#include "Engine/Common/Engine.h"

class BaseManager
{
public:
    BaseManager();
    virtual ~BaseManager();
    
    virtual bool Initialize();
    virtual void End();
};

#endif /* BaseManager_hpp */
