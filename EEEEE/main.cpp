//
//  main.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "Game/ClientApp.h"

int main(int argc, char * argv[])
{
    Arguments args;
    args.argc = argc;
    args.argv = argv;
    
    ClientApp app;
    if (false == app.Initialize(args))
        return -1;
    
    return app.Run();
}
