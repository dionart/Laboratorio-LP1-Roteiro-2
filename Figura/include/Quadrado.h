#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado:public FiguraGeometrica
{
    public:
        Quadrado();
        Quadrado(double lado);
        double getLado();
        void setLado(double lado);

        double calcularArea();

    protected:

    private:
        double lado;
};

#endif // QUADRADO_H
