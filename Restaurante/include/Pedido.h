#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>


class Pedido
{
    public:
        Pedido();
        Pedido(int numero, std::string descricao,int quantidade,double preco);


        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();

        void setNumero(int numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(int preco);
        void print();

    protected:

    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;
};

#endif // PEDIDO_H
