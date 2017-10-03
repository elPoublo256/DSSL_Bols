#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include <QGLWidget>

class MyGLWidget : public QGLWidget
{
   protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();
public:
    MyGLWidget();

};

#endif // MYGLWIDGET_H
