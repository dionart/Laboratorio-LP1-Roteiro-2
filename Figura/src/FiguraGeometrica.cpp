#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;

FiguraGeometrica::FiguraGeometrica()
{
    nome = "Nome nao informado";
}
FiguraGeometrica::FiguraGeometrica(std::string nome)
{
    setNome(nome);
}

double FiguraGeometrica::calcularArea()
{

}

string FiguraGeometrica::getNome()
{
    return nome;
}

void FiguraGeometrica::setNome(std::string nome)
{
    this->nome = nome;
}



