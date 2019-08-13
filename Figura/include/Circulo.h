#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo:public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(double raio);
        double getRaio();
        void setRaio(double raio);

        double calcularArea();

    protected:

    private:
        double raio;
};

#endif // CIRCULO_H
