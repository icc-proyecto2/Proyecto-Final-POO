#include "CProducto.h"

CProducto::CProducto() {
    precio = 0;
    nombre = "\0";
}

void CProducto::mostrar() {
    cout << "Precio: S/. " << precio << endl;
    cout << "Nombre: " << nombre << endl;
}

CProducto::CProducto(double _precio, const string &_nombre) {
    precio = _precio;
    nombre = _nombre;
}

void CProducto::podrirse() {
    cout << "Se pudre en: ";
}

