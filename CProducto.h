#include <iostream>
using namespace std;
#ifndef PROYECTO_SISTEMA_DE_COMPRAS_CPRODUCTO_H
#define PROYECTO_SISTEMA_DE_COMPRAS_CPRODUCTO_H


class CProducto {
protected:
    double precio;
    string nombre;
public:
    CProducto();
    CProducto(double _precio, const string &_nombre);

    double getPrecio() const {
        return precio;
    }

    const string &getNombre() const {
        return nombre;
    }

    virtual void mostrar();
    virtual void podrirse();

    CProducto operator + (double sum) const;
    CProducto operator + (const double sum[]);
    CProducto operator + (double sum[]);

    CProducto operator +(const CProducto &sum) const;
    CProducto operator + (CProducto &sum);
};

CProducto operator + (double k, const CProducto &origen);
CProducto operator + (double k, CProducto &origen);
CProducto operator + (const double sum1[], const CProducto &sum2);
CProducto operator + (double sum1[], const CProducto &sum2);


#endif //PROYECTO_SISTEMA_DE_COMPRAS_CPRODUCTO_H
