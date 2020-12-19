#include "CCliente.h"
using namespace std;

CCliente::CCliente() {
cargo = 0;
}

void CCliente::comprar(const CProducto &producto) {
    cargo = cargo + producto.getPrecio();
}
