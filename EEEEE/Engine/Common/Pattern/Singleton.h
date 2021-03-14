//
//  Singleton.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef Singleton_h
#define Singleton_h

template <typename T>
class TSingleton
{
public:
    static T* Get()
    {
        if (nullptr == m_pInstance)
            m_pInstance = new T();
        
        assert(nullptr != m_pInstance);
        return m_pInstance;
    }
    
    static void Destroy()
    {
        if (nullptr == m_pInstance)
            return;
        
        delete m_pInstance;
        m_pInstance = nullptr;
    }
    
private:
    static T* m_pInstance;
};

template <typename T> T* TSingleton<T>::m_pInstance = nullptr;

#endif /* Singleton_h */
