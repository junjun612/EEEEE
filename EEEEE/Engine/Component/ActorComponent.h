//
//  ActorComponent.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef ActorComponent_h
#define ActorComponent_h

#include "Engine/Common/Engine.h"

class ActorComponent
{
public:
    ActorComponent();
    virtual ~ActorComponent();
    
    void Initialize();
};

#endif /* ActorComponent_hpp */
