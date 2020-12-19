#include "CProducto.h"
#ifndef PROYECTO_SISTEMA_DE_COMPRAS_CVERDURAS_H
#define PROYECTO_SISTEMA_DE_COMPRAS_CVERDURAS_H


class CVerduras : public CProducto {
protected:
    bool pesticidas;
public:
    CVerduras();
    CVerduras(double _precio, const string &_nombre, bool _pesticidas);

    bool getPesticidas() const {
        return pesticidas;
    }
    void mostrar();
    void podrirse();
};


#endif //PROYECTO_SISTEMA_DE_COMPRAS_CVERDURAS_Hd
