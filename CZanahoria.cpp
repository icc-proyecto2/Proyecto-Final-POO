#include "CZanahoria.h"
#include "CVerduras.h"
#include "CProducto.h"

CZanahoria::CZanahoria() : CVerduras(precio, nombre, pesticidas){
    precio = 0.5;
    nombre = "Zanahaoria";
    pesticidas = true;
}
