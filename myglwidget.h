#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include <QGLWidget>
#include <GL/glu.h>
#include <gl_boals.h>
class MyGLWidget : public QGLWidget
{
private:
    GLUquadricObj* gluobj;
    int num_B;
    vector<GL_Boals>* vB;
    void show_boals();
public:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

public:
    MyGLWidget();
    MyGLWidget(int num);

};


#endif // MYGLWIDGET_H
