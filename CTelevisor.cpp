#include "CElectrodomestico.h"
#include "CTelevisor.h"

CTelevisor::CTelevisor() : CElectrodomestico(precio, nombre, garantia) {
    precio = 700;
    nombre = "Samsung OLED";
    garantia = 2;
}