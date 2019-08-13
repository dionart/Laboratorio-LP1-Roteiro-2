#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(std::string matricula, std::string nome, double salario);
        std::string getMatricula();
        std::string getNome();

        virtual double getSalario();
        virtual double getSalario(float percentual);

        void setMatricula(std::string matricula);
        void setNome(std::string nome);
        void setSalario(double salario);

    protected:
        std::string matricula;
        std::string nome;
        double salario;

    private:

};

#endif // FUNCIONARIO_H
