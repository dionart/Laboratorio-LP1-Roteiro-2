#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>


class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(std::string nome);

        virtual double calcularArea();

        std::string getNome();
        void setNome(std::string nome);

    protected:
        std::string nome;

    private:

};

#endif // FIGURAGEOMETRICA_H
