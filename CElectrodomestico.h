#include <iostream>
#include "CProducto.h"
#ifndef PROYECTO_SISTEMA_DE_COMPRAS_CELECTRODOMESTICO_H
#define PROYECTO_SISTEMA_DE_COMPRAS_CELECTRODOMESTICO_H


class CElectrodomestico : public CProducto {
protected:
    int garantia;
public:
    CElectrodomestico();
    CElectrodomestico(double _precio, const string &_nombre, int _garantia);

    int getGarantia() const {
        return garantia;
    }
    void mostrar();
    void podrirse();
};



#endif //PROYECTO_SISTEMA_DE_COMPRAS_CELECTRODOMESTICO_H
