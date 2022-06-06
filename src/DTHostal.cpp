#include "../include/DTHostal.h" 

DTHostal::DTHostal(std::string nombre, std::string direccion, std::string telefono, float calificacionPromedio){
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
    this->calificacionPromedio = calificacionPromedio
}

std::string DTHostal::getNombre(){
    return this->nombre;
}

std::string DTHostal::getDireccion(){
    return this->direccion;
}

std::string DTHostal::getTelefono(){
    return this->telefono;
}

float DTHostal::getCalificacionPromedio(){
    return this->calificacionPromedio;
}

DTHostal::~DTHostal(){}
