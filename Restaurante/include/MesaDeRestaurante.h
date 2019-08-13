#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define MAX_PEDIDOS 100

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaTotal();
        void print();

    protected:

    private:
        int posicao;
        Pedido pedidos[MAX_PEDIDOS];
};

#endif // MESADERESTAURANTE_H
