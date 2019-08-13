#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <iostream>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco endereco, std::string telefone);

        std::string getNome();
        std::string getTelefone();
        Endereco getEndereco();

        void setNome(std::string nome);
        void setTelefone(std::string telefone);
        void setEndereco(Endereco endereco);

    protected:

    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;

};

#endif // PESSOA_H
