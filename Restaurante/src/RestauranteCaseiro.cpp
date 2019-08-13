#include "RestauranteCaseiro.h"
#include <iostream>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(int posicaoMesa, Pedido p)
{
    mesas[posicaoMesa].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double total= 0;
    for(int i=0;i<MAX_MESA;i++){
        total+=mesas[i].calculaTotal();
    }
    return total;
}

void RestauranteCaseiro::print() {
    for (int i=0 ; i<MAX_MESA ; i++) {
        if(mesas[i].calculaTotal()>0){
            cout << "Mesa " << i << ": \n";
            mesas[i].print();
            cout << "\n";
        }
    }
}
