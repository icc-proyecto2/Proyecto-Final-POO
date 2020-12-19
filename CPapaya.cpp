#include "CPapaya.h"
#include "CFrutas.h"
#include "CProducto.h"
using namespace std;

CPapaya::CPapaya() : CFrutas (precio, nombre, vencimiento){
    precio = 8.0;
    nombre = "Papaya";
    vencimiento = "20/12";
}
