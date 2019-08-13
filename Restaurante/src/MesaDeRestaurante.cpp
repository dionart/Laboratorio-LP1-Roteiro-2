#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    //ctor
}
void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    for(int i=0;i<MAX_PEDIDOS;i++){
        if(pedidos[i].getDescricao()== p.getDescricao()){
            pedidos[i].setQuantidade(pedidos[i].getQuantidade()+p.getQuantidade());
            break;
        }else if(pedidos[i].getQuantidade()== 0){
            pedidos[i] = p;
            break;
        }
    }
}

void MesaDeRestaurante::zeraPedidos()
{
    for(int i= 0;i<MAX_PEDIDOS;i++){
        pedidos[i].setQuantidade(0);
    }
}

double MesaDeRestaurante::calculaTotal()
{
    double total=0;
    for(int i=0;i<MAX_PEDIDOS;i++){
        total +=  pedidos[i].getQuantidade() * pedidos[i].getPreco();
    }
    return total;
}

void MesaDeRestaurante::print()
{
    for (int i=0 ; i<MAX_PEDIDOS ; i++){
        if (pedidos[i].getQuantidade()>0){
            pedidos[i].print();
        }
    }
}

