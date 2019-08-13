#include <iostream>
#include "RestauranteCaseiro.h"


using namespace std;

int main()
{
    RestauranteCaseiro restaurante = RestauranteCaseiro();

    Pedido p1 = Pedido(1,"Coca",1,6.00);
    restaurante.adicionaAoPedido(1,p1);

    Pedido p2 = Pedido(2,"Hamburgao",2,7.00);
    restaurante.adicionaAoPedido(2,p2);

    Pedido p3 = Pedido(3,"Coca",2,6.00);
    restaurante.adicionaAoPedido(1,p3);

    restaurante.print();

    cout<<"Total arrecadado no restaurante : "<<restaurante.calculaTotalRestaurante();

    return 0;
}
