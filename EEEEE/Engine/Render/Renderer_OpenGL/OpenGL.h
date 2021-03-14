//
//  OpenGL.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef OpenGL_h
#define OpenGL_h

#ifdef __APPLE__
    #define GL_SILENCE_DEPRECATION
    #include <OpenGL/gl.h>
    #include <GLUT/glut.h>
#else
    #include <GL/gl.h>
    #include <GL/glut.h>
#endif

#endif /* OpenGL_h */
