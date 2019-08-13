#include <iostream>
#include "Endereco.h"
#include "Pessoa.h"

using namespace std;

int main()
{

    Endereco e1= Endereco("262","Serafico Nobrega","Jaguaribe","Joao Pessoa","Paraiba","580150-60");
    Endereco e2= Endereco("270","Artur Batista","Jaguaribe","Joao Pessoa", "Paraiba","58015810");

    Pessoa p1= Pessoa("Arthur Dionizio", e1,"986472444");
    Pessoa p2=Pessoa("Amanda Lins", e2, "328193182");

    cout<<p1.getNome()<<": \n"<<e1.toString()<<endl;
    cout<<p2.getNome()<<": \n"<<e2.toString()<<endl;


    return 0;
}
