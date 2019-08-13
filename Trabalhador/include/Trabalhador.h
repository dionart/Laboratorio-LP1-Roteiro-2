#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>

using namespace std;
class Trabalhador
{
    public:
        Trabalhador();
        Trabalhador(string nome, double salario);
        virtual float calcularPagamentoSemanal(int horasSemanais);

        string getNome();
        double getSalario();
        void setNome(string nome);
        void setSalario(double salario);

    protected:
        string nome;
        double salario;

};

#endif // TRABALHADOR_H
