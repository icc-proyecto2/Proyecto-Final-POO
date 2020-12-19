#include "CManzana.h"
#include "CFrutas.h"
#include "CProducto.h"
using namespace std;

CManzana::CManzana() : CFrutas (precio, nombre, vencimiento){
    precio = 5.0;
    nombre = "Manzana";
    vencimiento = "23/12";
}
