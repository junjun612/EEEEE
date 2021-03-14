//
//  ClientApp.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef ClientApp_h
#define ClientApp_h

#include "Engine/Common/Engine.h"

class Root;

class ClientApp
{
public:
    ClientApp();
    ~ClientApp();
    
    bool Initialize(const Arguments& args);
    bool Run();
    
protected:
    bool Initialize_Engine(const Arguments& args);
    bool Initialize_Game(const Arguments& args);
    
private:
    Root* m_pRoot;
};

#endif /* ClientApp_hpp */
