#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    FiguraGeometrica *t1 = new Triangulo(5,3);
    FiguraGeometrica *q1 = new Quadrado(3);
    FiguraGeometrica *c1 = new Circulo(5);

    cout<<"Nome da figura: "<<t1->getNome()<<endl
    <<"Area da figura: "<<t1->calcularArea()<<"cm"<<endl;

    cout<<"Nome da figura: "<<q1->getNome()<<endl
    <<"Area da figura: "<<q1->calcularArea()<<"cm"<<endl;

    cout<<"Nome da figura: "<<c1->getNome()<<endl
    <<"Area da figura: "<<c1->calcularArea()<<"cm"<<endl;


    return 0;
}
