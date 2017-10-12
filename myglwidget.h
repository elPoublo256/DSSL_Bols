#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include <QGLWidget>
#include <GL/glu.h>
#include <gl_boals.h>
class MyGLWidget : public QGLWidget
{
private:


    GL_Boals* boals_arr;
    int num_B;
    double xxx;

    void show_boals();
public:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();void all_b_in_c();
    void set_x(double xx, int i){boals_arr[i].set_x(xx);}
    void set_y(double xx, int i){boals_arr[i].set_y(xx);}
    int num_of_boals(){return num_B;}

public:
    MyGLWidget();
    MyGLWidget(int num);

};


#endif // MYGLWIDGET_H
