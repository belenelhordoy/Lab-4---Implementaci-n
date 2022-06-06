#ifndef DTCALIFICACION 
#define DTCALIFICACION

#include "DTFecha.h"

class DTFecha;

class DTCalificacion {
    private:
        DTFecha* fecha;
        int valor;
    public:
        DTCalificacion(DTFecha fecha, int valor); 
        
        DTFecha getFecha();
        int getValor();

        ~DTCalificacion();
};

#endif
