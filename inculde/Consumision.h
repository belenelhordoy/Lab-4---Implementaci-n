#ifndef CONSUMISION
#define CONSUMISION

#include "tipoDeConsumo.h"

class tipoDeConsumo;

class Consumision {
    private:
        int cantidad;
        tipoDeConsumo* tipo;
    public: 
        Consumision(int cantidad, tipoDeConsumo tipo);
        
        tipoDeConsumo getTipoDeConsumo();
        int getCantidad();
        void setTipoDeConsumo(tipoDeConsumo tipo);
        void setCantidad(int cantidad);
        
        void sumarConsumo();
        
        ~Consumision();
};

#endif