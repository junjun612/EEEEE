//
//  SceneComponent.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef SceneComponent_h
#define SceneComponent_h

#include "Engine/Component/ActorComponent.h"

class SceneComponent : public ActorComponent
{
public:
    SceneComponent();
    virtual ~SceneComponent();

protected:
    Transform m_Transform;
};

#endif /* SceneComponent_hpp */
