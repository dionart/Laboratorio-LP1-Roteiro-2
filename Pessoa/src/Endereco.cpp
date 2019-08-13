#include "Endereco.h"

Endereco::Endereco()
{
    rua=numero=bairro=estado=cidade=cep="Nao informado";
}

Endereco::Endereco(string numero, string rua, string bairro, string cidade, string estado, string cep)
{
    setRua(rua);
    setNumero(numero);
    setCep(cep);
    setBairro(bairro);
    setEstado(estado);
    setCidade(cidade);
}

string Endereco::toString()
{
    std::string total;

    return total= numero + "," + rua + "," + bairro+ "," + cidade+ "," + estado+ "," + cep;
}

string Endereco::getRua()
{
    return rua;
}

string Endereco::getNumero()
{
    return numero;
}

string Endereco::getCep()
{
    return cep;
}

string Endereco::getBairro()
{
    return bairro;
}

string Endereco::getEstado()
{
    return estado;
}

string Endereco::getCidade()
{
    return cidade;
}

void Endereco::setRua(string rua)
{
    this->rua = rua;
}

void Endereco::setNumero(string numero)
{
    this->numero = numero;
}

void Endereco::setCep(string cep)
{
    this->cep=cep;
}

void Endereco::setEstado(string estado)
{
    this->estado=estado;
}

void Endereco::setCidade(string cidade)
{
    this->cidade=cidade;
}
void Endereco::setBairro(string bairro)
{
    this->bairro=bairro;
}
