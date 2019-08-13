#include "Consultor.h"

Consultor::Consultor()
{
    matricula = "Matricula nao informada";
    nome = "Nome nao informado";
    salario = 0;
}

Consultor::Consultor(std::string matricula, std::string nome, double salario){
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

double Consultor::getSalario()
{
    return salario = salario + (salario*0.1);
}

double Consultor::getSalario(float percentual)
{
    return salario = salario + (salario * percentual);
}
