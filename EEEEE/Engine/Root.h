//
//  Root.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef Root_h
#define Root_h

#include "Common/Engine.h"
#include "Common/Pattern/Singleton.h"
#include "Config/EngineConfig.h"

class BaseManager;

class Root : public TSingleton<Root>
{
public:
    Root();
    ~Root();
    
    void Construct(const Arguments& Args);
    void Initialize();
    
    const Arguments& GetArguments() const;
    const EngineConfig& GetConfig() const;
    
    // Managers
    template <typename T>
    void AddManager();
    
    template <typename T>
    T* GetManager();
    
private:
    std::vector<BaseManager*> m_ManagerList;
    
    Arguments m_Arguments;
    EngineConfig m_Config;
};

template <typename T>
void Root::AddManager()
{
    m_ManagerList.emplace_back(new T());
}

template <typename T>
T* Root::GetManager()
{
    for (BaseManager* pManager : m_ManagerList)
    {
        T* pCast = dynamic_cast<T*>(pManager);
        if (nullptr == pCast)
            continue;
        
        return pCast;
    }
    
    return nullptr;
}

#endif /* Root_hpp */
