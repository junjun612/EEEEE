//
//  Renderer_OpenGL.cpp
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#include "Renderer_OpenGL.h"
#include "Engine/Root.h"

#define PI 3.14f

void OnDisplay() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear( GL_COLOR_BUFFER_BIT );
    glPointSize(5.0f);
    glBegin( GL_POINTS ); // GL_LINES, GL_LINE_STRIP, GL_LINE_LOOP
    {
        glColor3f( 0.0, 0.0, 0.0 );
        glVertex3f(0.2*sin(0*72*PI/180), 0.2*cos(0*72*PI/180), 0.0f);
        glVertex3f(0.2*sin(1*72*PI/180), 0.2*cos(1*72*PI/180), 0.0f);
        glVertex3f(0.2*sin(2*72*PI/180), 0.2*cos(2*72*PI/180), 0.0f);
        glVertex3f(0.2*sin(3*72*PI/180), 0.2*cos(3*72*PI/180), 0.0f);
        glVertex3f(0.2*sin(4*72*PI/180), 0.2*cos(4*72*PI/180), 0.0f);
    }
    glEnd();
    glFlush();
    glutSwapBuffers();
}

void OnReshape(int width, int height)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glViewport(0, 0, width, height);
    glLoadIdentity();
    gluOrtho2D(-0.5,0.5,-0.5,0.5);
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
    
    /*
    glutInit(&args.argc, args.argv);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(config.windowWidth, config.windowHeight);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutCreateWindow(config.titleName.c_str());
    glutDisplayFunc(OnDisplay);
    glutReshapeFunc(OnReshape);
    glutMainLoop();
    */
    
    return true;
}

void Renderer_OpenGL::End()
{
    
}

void Renderer_OpenGL::RenderFrame()
{
    
}
