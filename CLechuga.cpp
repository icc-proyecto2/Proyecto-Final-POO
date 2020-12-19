#include "CLechuga.h"
#include "CVerduras.h"
#include "CProducto.h"

CLechuga::CLechuga() : CVerduras(precio, nombre, pesticidas){
    precio = 1.5;
    nombre = "Lechuga";
    pesticidas = true;
}
