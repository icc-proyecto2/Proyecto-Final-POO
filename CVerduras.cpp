#include "CProducto.h"
#include "CVerduras.h"

CVerduras::CVerduras() {
    precio = 0;
    nombre = "\0";
    pesticidas = 0;
}

CVerduras::CVerduras(double _precio, const string &_nombre, bool _pesticidas) : CProducto(_precio, _nombre) {
    precio = _precio;
    nombre = _nombre;
    pesticidas = _pesticidas;
}

void CVerduras::mostrar(){
    CProducto::mostrar();
    cout << "Pesticidas: " << pesticidas << endl;
}

void CVerduras::podrirse() {
    CProducto::podrirse();
    cout << "5 dias" << endl;
}