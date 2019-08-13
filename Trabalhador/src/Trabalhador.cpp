#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    nome="Nome nao informado";
    salario = 0;
}
Trabalhador::Trabalhador(string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
}

float Trabalhador::calcularPagamentoSemanal(int horasSemanais)
{
    return 0;
}

string Trabalhador::getNome()
{
    return nome;
}


double Trabalhador::getSalario()
{
    return salario;
}

void Trabalhador::setNome(string nome)
{
    this->nome=nome;
}


void Trabalhador::setSalario(double salario)
{
    if(salario<0)
        this->salario=0;
    else
        this->salario = salario;
}
