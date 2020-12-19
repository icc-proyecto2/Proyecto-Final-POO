#include "CElectrodomestico.h"
#include "CLicuadora.h"

CLicuadora::CLicuadora() : CElectrodomestico(precio, nombre, garantia) {
    precio = 100;
    nombre = "Oster 50W";
    garantia = 1;
}