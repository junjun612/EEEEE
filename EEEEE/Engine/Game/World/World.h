//
//  World.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef World_h
#define World_h

#include "Engine/Common/Engine.h"

class Actor;

class World
{
public:
    World();
    ~World();
    
    const std::vector<Actor*>& GetActorList() const;
    void AddActor(Actor* pActor);
    void RemoveActor(Actor* pActor);
    
private:
    std::vector<Actor*> m_ActorList;
};

#endif /* World_hpp */
