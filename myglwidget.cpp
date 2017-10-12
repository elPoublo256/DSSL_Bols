#include "myglwidget.h"

void drow_Sphere(double r,double x, double y, double z, GLUquadricObj* obj)
{
    glTranslated(x,y,z);
    gluSphere(obj, r, 20, 20);
    glTranslated(-x,-y,-z);
}
void MyGLWidget::show_boals()
{

}

MyGLWidget::MyGLWidget() : QGLWidget()
{
     num_B=5;
     boals_arr=new GL_Boals[num_B];
     for(int i=0;i<num_B;i++)
     {

         boals_arr[i].set_x(cos(i));
         boals_arr[i].set_y(sin(i));
     }
}

MyGLWidget::MyGLWidget(int num)
{
    num_B=num;
    boals_arr=new GL_Boals[num_B];
    for(int i=0;i<num_B;i++)
    {

        boals_arr[i].set_x(cos(i));
        boals_arr[i].set_y(sin(i));
    }

}

void MyGLWidget::initializeGL()
{
   qglClearColor(Qt::black);
   glEnable(GL_DEPTH_TEST);
   glShadeModel(GL_FLAT);
   glEnable(GL_CULL_FACE);
   glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
}

void MyGLWidget::resizeGL(int nWidth, int nHeight)
{
    glViewport(0, 0, nHeight,nHeight );
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void MyGLWidget::paintGL()
{
     glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
     glPushMatrix();
     glColor3d(1,0,0);
     for(int i=0;i<num_B;i++)
     {
         double x=boals_arr[i].ret_x();
         double y=boals_arr[i].ret_y();
         drow_Sphere(0.01,x,y,0,boals_arr[i].ret_gl_obj());
     }
    glPopMatrix();


}

