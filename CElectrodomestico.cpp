#include <iostream>
#include "CProducto.h"
#include "CElectrodomestico.h"

CElectrodomestico::CElectrodomestico() {
    precio = 0;
    nombre = "\0";
    garantia = 0;
}

CElectrodomestico::CElectrodomestico(double _precio, const string &_nombre, int _garantia) : CProducto(_precio, _nombre) {
    precio = _precio;
    nombre = _nombre;
    garantia = _garantia;
}

void CElectrodomestico::mostrar() {
    CProducto::mostrar();
    cout << "Anios garantia: " << garantia << endl;
}

void CElectrodomestico::podrirse() {
    CProducto::podrirse();
    cout << "no se pudre." << endl;
}