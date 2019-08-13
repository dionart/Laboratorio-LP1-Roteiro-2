#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor:public Funcionario
{
    public:
        Consultor();
        Consultor(std::string matricula, std::string nome, double salario);

        double getSalario();
        double getSalario(float percentual);

    protected:

    private:
};

#endif // CONSULTOR_H
