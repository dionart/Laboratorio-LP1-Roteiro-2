#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario *f1=new Funcionario("32131","Arthur Dionizio", 5000);
    Funcionario *f2=new Consultor("32312","Jose",5000);
    Funcionario *f3=new Consultor("3231322","matheus",5000);

    cout<<f1->getSalario()<<endl;
    cout<<f2->getSalario()<<endl;
    cout<<f3->getSalario(0.20);

    return 0;
}
