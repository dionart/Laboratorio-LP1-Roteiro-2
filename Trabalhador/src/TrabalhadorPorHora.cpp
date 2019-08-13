#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{
    nome="Nome nao informado";
    salario = 0;
    valorDaHora=0;
}
TrabalhadorPorHora::TrabalhadorPorHora(string nome,double valorDaHora)
{
    setNome(nome);
    setValorDaHora(valorDaHora);

}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais)
{
    double salarioSemanal=0;

    if(horasSemanais<=40){
        salarioSemanal=valorDaHora*horasSemanais;
        salario = salarioSemanal*4;
    }else{
        float horaExtra=0;

        horaExtra=horasSemanais-40;
        salarioSemanal=(valorDaHora*40)+((valorDaHora*1.5)*horaExtra);
        salario = salarioSemanal*4;
    }

    return salarioSemanal;
}

double TrabalhadorPorHora::getValorDaHora(double valorDaHora)
{
    return valorDaHora;
}

void TrabalhadorPorHora::setValorDaHora(double valorDaHora)
{
    if(valorDaHora<0)
        this->valorDaHora=0;
    else
        this->valorDaHora=valorDaHora;
}
