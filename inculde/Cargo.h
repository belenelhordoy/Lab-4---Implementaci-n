#ifndef CARGO 
#define CARGO

#include <string>

#include "tipoDeCargo.h"
#include "DTCargo.h"
#include "Hostal.h"

class tipoDeCargo;
class DTCargo;
class Hostal;

class Cargo {
    private:
        tipoDeCargo tipo;
        Hostal* hostal;  //Uno solo no?
    public: 
        Cargo(tipoDeCargo tipo, Hostal* hostal);

        tipoDeCargo getTipoDeCargo();
        Hostal* getHostal();
        void setTipoDeCargo(tipoDeCargo tipo);
        void setHostal(Hostal* hostal);

        DTCargo getDTCargo();
        std::string getNombreHostal();

        ~Cargo();
};

#endif