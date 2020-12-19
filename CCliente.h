#include <iostream>
#include "CProducto.h"
using namespace std;


#ifndef PROYECTO_SISTEMA_DE_COMPRAS_CCLIENTE_H
#define PROYECTO_SISTEMA_DE_COMPRAS_CCLIENTE_H


class CCliente {
private:
    double cargo;
public:
    CCliente();
    void comprar(const CProducto &producto);

    double getCargo() const {
        return cargo;
    }


};




#endif //PROYECTO_SISTEMA_DE_COMPRAS_CCLIENTE_H
