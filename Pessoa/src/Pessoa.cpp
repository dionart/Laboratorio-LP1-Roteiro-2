#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa()
{
    nome = "Nome nao informado";
    telefone = "Telefone nao informado";
}

Pessoa::Pessoa(std::string nome)
{
    setNome(nome);
}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone)
{
    setNome(nome);
    setEndereco(endereco);
    setTelefone(telefone);
}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getTelefone()
{
    return telefone;
}

Endereco Pessoa::getEndereco()
{
    return endereco;
}

void Pessoa::setEndereco(Endereco endereco)
{
    this->endereco=endereco;
}

void Pessoa::setNome(std::string nome)
{
    this->nome=nome;
}

void Pessoa::setTelefone(std::string telefone)
{
    this->telefone=telefone;
}
