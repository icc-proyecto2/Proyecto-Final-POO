#include "CElectrodomestico.h"
#include "CArrocera.h"

CArrocera::CArrocera() : CElectrodomestico(precio, nombre, garantia) {
    precio = 200;
    nombre = "Imaco 9k";
    garantia = 3;
}