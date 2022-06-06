#include "../include/DTHabitacion.h" 

DTHabitacion::DTHabitacion(int numero, float precio, int capacidad/*, int* reservas*/){
    this->numero = numero;
    this->precio = precio;
    this->capacidad = capacidad;
    //this->reservas = reservas
}

int DTHabitacion::getNumero(){
    return this->numero;
}

float DTHabitacion::getPrecio(){
    return this->precio;
}

int DTHabitacion::getCapacidad(){
    return this->capacidad;
}

/*
int* DTHabitacion::getReservas(){
    return this->reservas;
}
*/

DTHabitacion::~DTHabitacion(){}
