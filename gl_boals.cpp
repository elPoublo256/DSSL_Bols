#include "gl_boals.h"
#include <math.h>
#include"stdlib.h"
#include "time.h"

double modulsqr( Kordinate &a)
{
  return (pow(a.ret_X(),2)+pow(a.ret_Y(),2));
}
double modul(Kordinate &a){return pow(modulsqr(a),0.5);}
double low_interaction(Kordinate& a)
{
    ///return (1/a-1/(a*a));
    return (1/modul(a)-1/modulsqr(a));
}

GL_Boals::GL_Boals()
{   gluobg=gluNewQuadric();
    gluQuadricDrawStyle(gluobg, GLU_LINE);
 
}
GL_Boals::GL_Boals(const Kordinate &r, const Kordinate &v, const Kordinate &a)
{
    kordinate=r;
    velocity=v;
    acceleration=a;
    
}

void calc_Acc_One(vector<GL_Boals*> arr_balls, int i)
{
    Kordinate r=arr_balls[i]->ret_Kordinate();
    auto it=arr_balls.begin()+i;
    arr_balls.erase(it);
    Kordinate res(0,0);
    for(GL_Boals* a:arr_balls)
    {
        Kordinate dist=r-a->ret_Kordinate();
        Kordinate norm=dist/modul(dist);
        res=res+norm*low_interaction(dist);

    }

}

void calc_Acc_One(GL_Boals* arr_balls, int i, int size_arr)
{
    Kordinate r=arr_balls[i].ret_Kordinate();
    Kordinate res(0,0);
    for(int it=0;it<i;it++)
    {
        Kordinate dist=r-arr_balls[i].ret_Kordinate();
        Kordinate norm=dist/modul(dist);
        res=res+norm*low_interaction(dist);

    }
    for(int it=i+1;it<size_arr;it++)
    {
        Kordinate dist=r-arr_balls[i].ret_Kordinate();
        Kordinate norm=dist/modul(dist);
        res=res+norm*low_interaction(dist);

    }
    arr_balls[i].set_acceleration(res);

}
