#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
    Trabalhador *t1 = new TrabalhadorAssalariado("Arthur Dionizio", 5000);
    Trabalhador *t2= new TrabalhadorPorHora("Samuel Laerte", 50);
    Trabalhador *t3= new TrabalhadorPorHora("Arthur Ruan", 50);

    cout<<"Nome :"<<t1->getNome()<<" Salario semanal :"<<t1->calcularPagamentoSemanal(40)<<
    " Salario mensal :"<<t1->getSalario()<<endl;

    cout<<"Nome :"<<t2->getNome()<<" Salario semanal :"<<t2->calcularPagamentoSemanal(40)<<
    " Salario mensal :"<<t2->calcularPagamentoSemanal(40)*4<<endl;


    cout<<"Nome :"<<t3->getNome()<<" Salario semanal :"<<t3->calcularPagamentoSemanal(60)<<
    " Salario mensal :"<<t3->calcularPagamentoSemanal(60)*4<<endl;


    return 0;
}
