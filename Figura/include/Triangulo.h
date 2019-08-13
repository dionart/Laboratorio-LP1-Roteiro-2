#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"


class Triangulo:public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(double base,double altura);
        double getBase();
        void setBase(double base);
        double getAltura();
        void setAltura(double altura);

        double calcularArea();

    protected:

    private:
        double base;
        double altura;
};

#endif // TRIANGULO_H
