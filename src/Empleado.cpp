#include "../include/Empleado.h" 

Empleado::Empleado(string nombre, string email, string password){
    this->nombre = nombre;
    this->email = email;
    this->password = password;
}

std::string Empleado::getNombre(){
    return this->nombre;
}

std::string Empleado::getEmail(){
    return this->email;
}

std::string Empleado::getPassword(){
    return this->password;
}

void Empleado::setNombre(std::string nombre){
    this->nombre = nombre;
}

void Empleado::setEmail(std::string email){
    this->email = email;
}

void Empleado::setPassword(std::string password){
    this->password = password;
}

void Empleado::addCargo(Cargo* cargo){
    this->cargos.insert(cargo);
}

void Empleado::createCargo(std::string nombreHostal, tipoDeCargo cargo){};

Cargo Empleado::getCargo(std::string nombreHostal){};

void Empleado::crearLinkEmpleadoRespuesta(Respuesta resp){};

std::set<DTCargo> Empleado::getCargos(){};

std::set<std::string> Empleado::getNombreHostales(){};

void Empleado::notificar(Calificacion nuevaCalificacion){};

Empleado::~Empleado(){}
