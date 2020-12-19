#include "CMandarina.h"
#include "CFrutas.h"
#include "CProducto.h"
using namespace std;

CMandarina::CMandarina() : CFrutas (precio, nombre, vencimiento){
    precio = 1.0;
    nombre = "Mandarina";
    vencimiento = "10/12";
}
