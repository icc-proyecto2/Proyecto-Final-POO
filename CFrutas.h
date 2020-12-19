#include "CProducto.h"
#ifndef PROYECTO_SISTEMA_DE_COMPRAS_CFRUTAS_H
#define PROYECTO_SISTEMA_DE_COMPRAS_CFRUTAS_H


class CFrutas : public CProducto {
protected:
    string vencimiento;
public:
    CFrutas();
    CFrutas(double _precio, const string &_nombre, const string &_vencimiento);

    const string &getVencimiento() const {
        return vencimiento;
    }
    void mostrar();
    void podrirse();
};


#endif //PROYECTO_SISTEMA_DE_COMPRAS_CFRUTAS_H
