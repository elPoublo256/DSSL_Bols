#ifndef GL_BOALS_H
#define GL_BOALS_H


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
//bool operator ==(Kordinate b){return (this->ret_X()==b.ret_X())&&(this->ret_Y()==b.ret_Y());}
};

class Ver : public Kordinate
{
public:
    Ver() : Kordinate::Kordinate(){}
    Ver(const int& x, int& y) : Kordinate(x,y){}//;// : Kordinate(int& x,int& y);
};
class Acp : public Ver
{

};

class GL_Boals
{
private:
    double size;

public:
    GL_Boals();

};

#endif // GL_BOALS_H