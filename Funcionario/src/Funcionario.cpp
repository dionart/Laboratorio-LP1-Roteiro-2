#include "Funcionario.h"
#include <iostream>

using namespace std;
Funcionario::Funcionario()
{
    matricula = "Matricula nao informada";
    nome= "Nome nao informado";
    salario= 0;
}

Funcionario::Funcionario(std::string matricula, std::string nome, double salario)
{
  setMatricula(matricula);
  setNome(nome);
  setSalario(salario);
}

string Funcionario::getMatricula()
{
    return matricula;
}

string Funcionario::getNome()
{
    return nome;
}

double Funcionario::getSalario()
{
    return salario;
}

double Funcionario::getSalario(float percentual)
{

}

void Funcionario::setMatricula(std::string matricula)
{
    this->matricula=matricula;
}

void Funcionario::setNome(std::string nome)
{
    this->nome=nome;
}
void Funcionario::setSalario(double salario)
{
    if(salario<0)
        this->salario=0;
    else
        this->salario=salario;
}
