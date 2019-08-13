#include "Triangulo.h"
#include <iostream>
using namespace std;

Triangulo::Triangulo()
{
    base=altura=0;
}
Triangulo::Triangulo(double base, double altura)
{
    nome = "Triangulo";
    setBase(base);
    setAltura(altura);
}

double Triangulo::getBase()
{
    return base;
}

void Triangulo::setBase(double base)
{
    if(base<0)
        this->base=0;
    else
        this->base=base;
}

double Triangulo::getAltura()
{
    return altura;
}

void Triangulo::setAltura(double altura)
{
    if(altura<0)
        this->altura=0;
    else
        this->altura=altura;
}

double Triangulo::calcularArea()
{
    return (base*altura)/2;
}



