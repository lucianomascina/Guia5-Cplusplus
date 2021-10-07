#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class figura
{
    private:
        string nombre;
    public:
        string getnombre();
        void setnombre(string);
        figura(string);
        virtual void dibujar();
};
figura::figura(string nom)
{
    this->nombre=nom;
}
string figura::getnombre()
{
    return this->nombre;
}
void figura::setnombre(string nom)
{
    this->nombre=nom;
}
void figura::dibujar()
{
    cout<<"no tengo forma"<<endl;
}
class circulo : public figura
{
    private:
        double diametro;
    public:
        circulo(string,double);
        void setdiametro(double);
        double getdiametro();
        void dibujar();
};
circulo::circulo(string nom,double diam):figura(nom)
{
    this->diametro=diam;
}
void circulo::setdiametro(double d)
{
    this->diametro=d;
}
double circulo::getdiametro()
{
    return this->diametro;
}
void circulo::dibujar()
{
    cout<<" *\n"<<"***\n"<<"****\n"<<endl;
}
class rectangulo : public figura
{
    private:
        double base;
        double altura;
    public:
        rectangulo(string,double,double);
        void setbase(double);
        double getbase();
        void setaltura(double);
        double getaltura();

};
rectangulo::rectangulo(string nom,double ba,double alt):figura(nom)
{
    this->base=ba;
    this->altura=alt;
}
void rectangulo::setbase(double b)
{
    this->base=b;
}
double rectangulo::getbase()
{
    return this->base;
}
void rectangulo::setaltura(double a)
{
    this->altura=a;
}
double rectangulo::getaltura()
{
    return this->altura;
}

class triangulo : public figura
{
    private:
        double catmenor;
        double catmayor;
        double hipotenusa;
    public:
        triangulo(string,double,double,double);
        double getcmenor();
        void setcmenor(double);
        double getcmayor();
        void setcmayor(double);
        double gethipo();
        void sethipo(double);

};
triangulo::triangulo(string nom,double cmenor,double cmayor,double hipo) : figura(nom)
{
     this->catmenor=cmenor;
     this->catmayor=cmayor;
     this->hipotenusa=hipo;
}
double triangulo::getcmenor()
{
    return this->catmenor;
}
void triangulo::setcmenor(double cme)
{
    this->catmenor=cme;
}
double triangulo::getcmayor()
{
    return this->catmayor;
}
void triangulo::setcmayor(double cma)
{
    this->catmayor=cma;
}
double triangulo::gethipo()
{
    return this->hipotenusa;
}
void triangulo::sethipo(double hip)
{
    this->hipotenusa=hip;
}

int main()
{
    circulo *c=new circulo("circulo",10);
    figura *c1=new circulo("circulo",20);
    c1->dibujar();
    c->dibujar();
    system("PAUSE");
    return 0;
}
