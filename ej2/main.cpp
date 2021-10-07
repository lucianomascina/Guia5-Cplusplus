#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class complejo
{
    private:
       int real;
       int imaginario;
    public:
        complejo *operator+(complejo);
};

complejo* complejo::operator+(complejo b)
{
    complejo* aux=new complejo(real+b.real,imaginario+b.imaginario);
    return aux;
}

int main()
{

    system("PAUSE");
    return 0;
}
