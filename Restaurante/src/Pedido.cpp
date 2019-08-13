#include "Pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido()
{
    numero = quantidade = preco = 0;
}

Pedido::Pedido(int numero, std::string descricao, int quantidade,double preco)
{
    setNumero(numero);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}

int Pedido::getNumero()
{
    return numero;
}

std::string Pedido::getDescricao()
{
    return descricao;
}

int Pedido::getQuantidade()
{
    return quantidade;
}

double Pedido::getPreco()
{
    return preco;
}

void Pedido::setNumero(int numero)
{
    if(numero<0)
        this->numero = 0;
    else
        this->numero = numero;
}

void Pedido::setDescricao(std::string descricao)
{
    this->descricao = descricao;
}

void Pedido::setQuantidade(int quantidade)
{
    if(quantidade < 0)
        this->quantidade=0;
    else
        this->quantidade= quantidade;
}

void Pedido::setPreco(int preco)
{
    if(preco<0)
        this->preco = 0;
    else
        this->preco = preco;
}

void Pedido::print()
{
    cout << descricao << ", quant: " << quantidade << ", preco: " << preco <<
    ", tot: " << preco*quantidade << endl;
}
