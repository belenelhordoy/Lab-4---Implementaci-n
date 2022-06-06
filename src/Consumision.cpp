#include "../include/Consumision.h" 

Consumision::Consumision(int cantidad, tipoDeConsumo tipo){
    this->cantidad = cantidad;
    this->tipo = tipo;
}

tipoDeCargo Consumision::getTipoDeConsumo(){
    return this->tipo;
}

int Consumision::getCantidad(){
    return this->cantidad;
}

void Consumision::setTipoDeConsumo(tipoDeConsumo tipo){
    this->tipo = tipo;
}

void Consumision::setCantidad(int cantidad){
    this->cantidad = cantidad;
}

void Consumision::sumarConsumo(){};

Consumision::~Consumision(){}
