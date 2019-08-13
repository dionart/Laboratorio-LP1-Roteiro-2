#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora:public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string nome,double valorDaHora);

        float calcularPagamentoSemanal(int horasSemanais);

        double getValorDaHora(double valorDaHora);
        void setValorDaHora(double valorDaHora);

    private:
        double valorDaHora;
};

#endif // TRABALHADORPORHORA_H
