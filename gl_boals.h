#ifndef GL_BOALS_H
#define GL_BOALS_H
#include <omp.h>
using namespace std;
#include <vector>
class Kordinate
{
private:
double x_kord;
double y_kord;
public:
Kordinate(){}
Kordinate(const int& x,const int& y){x_kord=x; y_kord=y;}
Kordinate(const Kordinate& copy){x_kord=copy.x_kord;y_kord=copy.y_kord;}
void set_Kordinate(const double& X,const double& Y){x_kord=X;y_kord=Y;}
 double ret_X(){return x_kord;}
double ret_Y(){return y_kord;}
Kordinate operator +(Kordinate b){return Kordinate(this->ret_X()+b.ret_X(),this->ret_Y()+b.ret_Y());}
Kordinate operator -(Kordinate b){return Kordinate(this->ret_X()-b.ret_X(),this->ret_Y()-b.ret_Y());}

//можно было бы вообще использовать Eigen::vector2D или uBlas какой нить, но я поздно спохватился
//bool operator ==(Kordinate b){return (this->ret_X()==b.ret_X())&&(this->ret_Y()==b.ret_Y());}
};
template <class T>
Kordinate operator *(Kordinate a, T b){return Kordinate(a.ret_X()*b,a.ret_Y()*b);}
template <class T>
Kordinate operator /(Kordinate a, T b){return Kordinate(a.ret_X()/b,a.ret_Y()/b);}
/*
class Velocity : public Kordinate
{
public:
    Velocity() : Kordinate::Kordinate(){}
    Velocity(const Kordinate& copy) : Kordinate(copy){}
    Velocity(const int& x, int& y) : Kordinate(x,y){}
};
class Acceleration : public Kordinate
{
public:
    Acceleration() : Kordinate::Kordinate(){}
    Acceleration(const Kordinate& copy) : Kordinate(copy){}
    Acceleration(const int& x, const int& y) : Kordinate(x,y){}

};
*/
double modulsqr( Kordinate& a);
double modul( Kordinate& a);

class GL_Boals
{
private:

    double size;
    Kordinate kordinate;
    Kordinate velocity;
    Kordinate acceleration;

public:
    GL_Boals();
    GL_Boals(const Kordinate& r, const Kordinate& v, const Kordinate& a);
    void set_kor(const Kordinate& r){kordinate=r;}
    void set_Velocity(const Kordinate& r){velocity=r;}
    void set_acceleration(const Kordinate& r){acceleration=r;}
    void set_size(const double& s){size=s;}
    Kordinate ret_Kordinate(){return kordinate;}
    Kordinate ret_Velocity(){return velocity;}
    Kordinate ret_Acceleration(){return acceleration;}
};
double low_interaction(Kordinate& a);
///This function calculates the acceleration for array_balls[i]  in the array_balls
void calc_Acc_One(vector<GL_Boals*> arr_balls, int i);
///This function calculates and sets the acceleration for each ball in the array_balls




#endif // GL_BOALS_H
