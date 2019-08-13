#include "Circulo.h"
#define PI 3.14
#include <iostream>

using namespace std;
Circulo::Circulo()
{
    raio=0;
}

Circulo::Circulo(double raio)
{
    nome="Circulo";
    setRaio(raio);
}

double Circulo::getRaio()
{
    return raio;
}

void Circulo::setRaio(double raio)
{
    if(raio<0)
        this->raio=0;
    else
        this->raio=raio;
}

double Circulo::calcularArea()
{
    return PI*(raio*raio);
}



