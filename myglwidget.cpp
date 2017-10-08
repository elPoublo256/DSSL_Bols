#include "myglwidget.h"

void drow_Sphere(double r,double x, double y, double z, GLUquadricObj* obj)
{
    glTranslated(x,y,z);
    gluSphere(obj, r, 20, 20);
    glTranslated(-x,-y,-z);
}
void MyGLWidget::show_boals()
{
    for(auto it=vB->begin();it!=vB->end();it++)
    {
        GL_Boals* b=it.base();

        drow_Sphere(0.125,b->ret_x(),b->ret_y(),0,gluobj);

    }
}

MyGLWidget::MyGLWidget() : QGLWidget()
{
    gluobj = gluNewQuadric();
     gluQuadricDrawStyle(gluobj, GLU_LINE);
     vB=new vector<GL_Boals>(8);
     double x=-1;
     for(auto it=vB->begin();it!=vB->end();it++)
     {
         x+=2/8;
         GL_Boals* b=it.base();
         Kordinate r(x,0);
         b->set_kor(r);

     }

}

MyGLWidget::MyGLWidget(int num)
{
    vB=new vector<GL_Boals>(num);

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
    GLUquadricObj *quadObj;


     quadObj = gluNewQuadric();
     glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
     glPushMatrix();
     glColor3d(1,0,0);
     gluQuadricDrawStyle(quadObj, GLU_LINE);
     //glRotated(45,1,0,0);
     //drow_Sphere(1,0,0,0,gluobj);
     //show_boals();
    glPopMatrix();
    gluDeleteQuadric(quadObj);

}
