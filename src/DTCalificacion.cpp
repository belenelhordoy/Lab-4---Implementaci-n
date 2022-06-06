#include "../include/DTCalificacion.h"

DTCalificacion::DTCalificacion(DTFecha fecha, int valor){
    this->fecha = fecha;
    this->valor = valor;
}

DTFecha Comentario::getFecha(){
    return this->fecha;
}

int Comentario::getValor(){
    return this->valor;
}

Calificacion::~Calificacion(){
    this->fecha->~DTFecha();
}