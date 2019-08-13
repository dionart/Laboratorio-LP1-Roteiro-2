#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    nome="Nome nao informado";
    salario = 0;
}
TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(int horasSemanais)
{
    return salario/4;
}
