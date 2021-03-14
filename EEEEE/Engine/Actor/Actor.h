//
//  Actor.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef Actor_h
#define Actor_h

#include "Engine/Common/Engine.h"

class ActorComponent;

class Actor
{
public:
    Actor();
    virtual ~Actor();
    
    virtual void Tick();
    
    template <typename T>
    void GetComponents(std::vector<T*>& outList) const;
    
protected:
    ActorComponent* m_pRootComponent;
    
private:
    std::vector<ActorComponent*> m_ComponentList;
};

template <typename T>
void Actor::GetComponents(std::vector<T*>& outList) const
{
    outList = m_ComponentList;
}


#endif /* Actor_hpp */
