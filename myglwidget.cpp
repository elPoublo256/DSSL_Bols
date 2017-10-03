#include "myglwidget.h"

MyGLWidget::MyGLWidget() : QGLWidget()
{

}

void MyGLWidget::resizeGL(int w, int h)
{
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glViewport(0,0,w,h);
 glOrtho(0,100,100,0,-1,1);
}

void MyGLWidget::paintGL()
{

}
