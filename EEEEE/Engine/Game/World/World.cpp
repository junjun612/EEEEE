//
//  World.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "World.h"

World::World()
{
    m_ActorList.empty();
}

World::~World()
{
    
}

const std::vector<Actor*>& World::GetActorList() const
{
    return m_ActorList;
}

void World::AddActor(Actor* pActor)
{
    m_ActorList.emplace_back(pActor);
}

void World::RemoveActor(Actor* pActor)
{
    for (auto iter = m_ActorList.begin(); iter != m_ActorList.end(); ++iter)
    {
        if ((*iter) != pActor)
            continue;
        
        m_ActorList.erase(iter);
        break;
    }
}
