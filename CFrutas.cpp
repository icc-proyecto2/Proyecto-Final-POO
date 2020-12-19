#include "CFrutas.h"
#include "CProducto.h"

CFrutas::CFrutas() {
    precio = 0;
    nombre = "\0";
    vencimiento = "\0";
}

CFrutas::CFrutas(double _precio, const string &_nombre, const string &_vencimiento) : CProducto(_precio, _nombre) {
    precio = _precio;
    nombre = _nombre;
    vencimiento = _vencimiento;
}

void CFrutas::mostrar() {
    CProducto::mostrar();
    cout << "Vencimiento:\t\t" << vencimiento << endl << endl;
}

void CFrutas::podrirse() {
    CProducto::podrirse();
    cout << "7 dias" << endl;
}