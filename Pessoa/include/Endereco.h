#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>

using namespace std;
class Endereco
{
    public:
        Endereco();
        Endereco(string numero, string rua, string bairro, string cidade, string estado, string cep);
        string toString();

        string getRua();
        string getNumero();
        string getCep();
        string getBairro();
        string getEstado();
        string getCidade();

        void setRua(string rua);
        void setNumero(string numero);
        void setCep(string cep);
        void setBairro(string bairro);
        void setEstado(string estado);
        void setCidade(string cidade);

    protected:

    private:
        string rua;
        string numero;
        string cep;
        string bairro;
        string estado;
        string cidade;
};

#endif // ENDERECO_H
