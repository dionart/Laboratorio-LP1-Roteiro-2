#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#define MAX_MESA 20


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int posicaoMesa, Pedido p);
        double calculaTotalRestaurante();
        void print();

    protected:

    private:
        MesaDeRestaurante mesas[MAX_MESA];
};

#endif // RESTAURANTECASEIRO_H
