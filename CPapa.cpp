#include "CPapa.h"
#include "CVerduras.h"
#include "CProducto.h"

CPapa::CPapa() : CVerduras(precio, nombre, pesticidas){
    precio = 1;
    nombre = "Papa";
    pesticidas = false;
}