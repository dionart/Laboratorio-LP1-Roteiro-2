#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado:public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(string nome, double salario);
        float calcularPagamentoSemanal(int horasSemanais);


    private:
};

#endif // TRABALHADORASSALARIADO_H
