#include "Quadrado.h"
#include <iostream>
using namespace std;

Quadrado::Quadrado()
{
    lado=0;
}

Quadrado::Quadrado(double lado)
{
    nome = "Quadrado";
    setLado(lado);
}

double Quadrado::getLado()
{
    return lado;
}

void Quadrado::setLado(double lado)
{
    if(lado<0)
        this->lado=0;
    else
        this->lado=lado;
}

double Quadrado::calcularArea()
{
    return lado*lado;
}



