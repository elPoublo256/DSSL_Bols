#include "gl_boals.h"
#include <math.h>
#include <qalgorithms.h>
double modulsqr( Kordinate &a)
{
  return (pow(a.ret_X(),2)+pow(a.ret_Y(),2));
}
double modul(Kordinate &a){return pow(modulsqr(a),0.5);}
double low_interaction(Kordinate a)
{
    ///return (1/a-1/(a*a));
    return (1/modul(a)-1/modulsqr(a));
}

GL_Boals::GL_Boals()
{

}

Acceleration calc_Acc_One(QVector<GL_Boals *> arr_balls, int i)
{
    Kordinate r=arr_balls[i]->ret_Kordinate();
    arr_balls.remove(i);
    Acceleration res(0,0);
    for(GL_Boals* a:arr_balls)
    {
        Kordinate dist=r-a->ret_Kordinate();
        Kordinate norm=dist/modul(dist);
        res=res+norm*low_interaction(dist);

    }
    return res;
}
