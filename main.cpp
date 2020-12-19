#include <iostream>
#include "CManzana.h"
#include "CMandarina.h"
#include "CPapaya.h"
#include "CProducto.h"
#include "CZanahoria.h"
#include "CPapa.h"
#include "CLechuga.h"
#include "CFrutas.h"
#include "CElectrodomestico.h"
#include "CTelevisor.h"
#include "CArrocera.h"
#include "CLicuadora.h"
#include "CCliente.h"
#include <vector>
using namespace std;

//-------------------------------------------------------
//Integrantes: Diego Herrera - Jose Gil - Joaquin Padilla
//-------------------------------------------------------

int main() {

    // declaracion de variables "visuales"

    string barra = "=========================";
    string separador = "^^^^^^^^^^^^^^^^^^^^^^^^^";

    //Inicializamos las clases Hijas de producto

    CProducto *pFrutas = new CFrutas();
    CProducto *pVerduras = new CVerduras();
    CProducto *pElectrodomesticos = new CElectrodomestico();

    //Creamos nuestros objetos

    CProducto *vector[9];
    vector[0] = new CManzana();
    vector[1] = new CMandarina();
    vector[2] = new CPapaya();
    vector[3] = new CZanahoria();
    vector[4] = new CPapa();
    vector[5] = new CLechuga();
    vector[6] = new CTelevisor();
    vector[7] = new CLicuadora();
    vector[8] = new CArrocera();

    //Inicializamos CCliente

    CCliente *pCliente = new CCliente();
    int opcion;

    //Formacion del menu prinipal

    cout<<barra<<"\n  Bienvenido a la bodega\n        Don Henry\n"<<barra<<endl;
    cout<<"   OFERTAS DEL DIA!"<<endl<<endl;

    cout<<"\tFRUTAS"<<endl;
    vector[0]->mostrar();vector[1]->mostrar();vector[2]->mostrar();
    cout<<separador<<endl<<endl;

    cout<<"       VERDURAS"<<endl;
    vector[4]->mostrar();vector[5]->mostrar();vector[3]->mostrar();
    cout<<separador<<endl<<endl;

    cout<<"  ELECTRODOMESTICOS"<<endl<<endl;
    vector[6]->mostrar();vector[8]->mostrar();vector[7]->mostrar();
    cout<<endl<<separador<<endl;

    //Bucle de compra

    do{
        cout << "1. Manzana\n2. Mandarina\n3. Papaya\n4. Zanahora\n6. Lechuga\n5. Papa\n7. Televisor\n8. Licuadora\n9. Arrocera\n" << endl;
        cout << "Ingrse opcion (1-9) o '0' para finalizar: " << endl;
        cin >> opcion;

        switch(opcion){
            case 1:
                pCliente->comprar(*vector[0]);
                break;
            case 2:
                pCliente->comprar(*vector[1]);
                break;
            case 3:
                pCliente->comprar(*vector[2]);
                break;
            case 4:
                pCliente->comprar(*vector[3]);
                break;
            case 5:
                pCliente->comprar(*vector[4]);
                break;
            case 6:
                pCliente->comprar(*vector[5]);
                break;
            case 7:
                pCliente->comprar(*vector[6]);
                break;
            case 8:
                pCliente->comprar(*vector[7]);
                break;
            case 9:
                pCliente->comprar(*vector[8]);
                break;
            default:
                break;
        }
    }while (opcion != 0);

    //Impresion de la boleta

    cout <<barra<<barra<<endl<<"Muchas gracias por comprar en Bodegas don Henry!"<<endl;
    cout << "\t    El costo total es: S/. " << pCliente->getCargo() << endl;
    cout<<barra<<barra<<endl;
    cout << endl << "Informacion importante: " << endl;
    cout << "Frutas -> ";
    pFrutas->podrirse();
    cout << "Verduras -> ";
    pVerduras->podrirse();
    cout << "Electrodomesticos -> ";
    pElectrodomesticos->podrirse();


    return 0;
}

//Integrantes: Diego Herrera - Jose Gil - Joaquin Padilla
