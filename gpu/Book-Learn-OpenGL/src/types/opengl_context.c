/*
 * You can think of the OpenGL context a larger state machine.
 *
 * */

#include <GL/gl.h>

typedef struct object_name {
  float option1;
  float option2;
  char name[];
} Object_Name;

struct OpenGL_Context {
  Object_Name *object_Window_Target;
};

void createOpenGLObject() { unsigned int objectId = 0; }
