#ifndef GL_BOALS_H
#define GL_BOALS_H
#include <QVector>
#include <omp.h>


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
Kordinate operator *(double b){return Kordinate(this->ret_X()*b,this->ret_Y()*b);}
Kordinate operator /(double b){return Kordinate(this->ret_X()/b,this->ret_Y()/b);}
//можно было бы вообще использовать Eigen::vector2D или uBlas какой нить, но я поздно спохватился
//bool operator ==(Kordinate b){return (this->ret_X()==b.ret_X())&&(this->ret_Y()==b.ret_Y());}
};

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
double modulsqr( Kordinate& a);
double modul( Kordinate& a);

class GL_Boals
{
private:

    double size;
    Kordinate kor;
    Velocity v;
    Acceleration a;

public:
    GL_Boals();
    GL_Boals(const Kordinate& r, const Velocity& v, const Acceleration& a);
    void set_kor(const Kordinate& r){kor=r;}
    void set_Velocity(const Velocity& r){v=r;}
    void set_acceleration(const Acceleration& r){a=r;}
    void set_size(const double& s){size=s;}
    Kordinate ret_Kordinate(){return kor;}
    Kordinate ret_Velocity(){return v;}
    Kordinate ret_Acceleration(){return a;}
};
double low_interaction(Kordinate a);
///This function calculates the acceleration for array_balls[i]  in the array_balls
Acceleration calc_Acc_One(QVector<GL_Boals*> arr_balls, int i);
///This function calculates and sets the acceleration for each ball in the array_balls
void calc_Acc_ALL(QVector<GL_Boals*> arr_balls);



#endif // GL_BOALS_H
