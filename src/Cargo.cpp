#include "../include/Cargo.h" 

Cargo::Cargo(tipoDeCargo tipo, Hostal* hostal){
    this->tipo = tipo;
    this->hostal = hostal;
}

tipoDeCargo Cargo::getTipoDeCargo(){
    return this->tipo;
}

Hostal* Cargo::getHostal(){
    return this->hostal;
}

void Cargo::setTipoDeCargo(tipoDeCargo tipo){
    this->tipo = tipo;
}

void Cargo::setHostal(Hostal* hostal){
    this->hostal = hostal;
}

DTCargo Cargo::getDTCargo(){};

std::string Cargo::getNombreHostal(){};

Cargo::~Cargo(){}
