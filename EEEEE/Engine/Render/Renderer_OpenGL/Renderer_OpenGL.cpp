//
//  Renderer_OpenGL.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "Renderer_OpenGL.h"
#include "Engine/Root.h"

void GraphiqueAffichage() {
   glClearColor(1.0, 1.0, 0.5, 0.5);
   glClear(GL_COLOR_BUFFER_BIT);
   glMatrixMode(GL_MODELVIEW);
   glFlush();
}

Renderer_OpenGL::Renderer_OpenGL()
{
    
}

Renderer_OpenGL::~Renderer_OpenGL()
{
    
}

bool Renderer_OpenGL::Initialize()
{
    Arguments args = Root::Get()->GetArguments();
    EngineConfig config = Root::Get()->GetConfig();
    
    glutInit(&args.argc, args.argv);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(config.windowWidth, config.windowHeight);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutCreateWindow(config.titleName.c_str());
    glutDisplayFunc(GraphiqueAffichage);
    glutMainLoop();
    return true;
}

void Renderer_OpenGL::End()
{
    
}

void Renderer_OpenGL::RenderFrame()
{
    
}
