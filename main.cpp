#include "widget.h"
#include <QApplication>
#include <myglwidget.h>
#include <GL/glu.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget
    MyGLWidget w;
    w.show();
    w.update();

    return a.exec();
}
