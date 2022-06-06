#ifndef EMPLEADO
#define EMPLEADO

#include <string>
#include <set>

#include "Usuario.h"
#include "Cargo.h"
#include "tipoDeCargo.h"
#include "Respuesta.h"
#include "DTCargo.h"
#include "Calificacion.h"

class Usuario;
class Cargo;
class tipoDeCargo;
class Respuesta;
class DTCargo;
class Calificacion;

class Empleado:public Usuario{
    private:
        std::set<Cargo*> cargos;

    public:
        Empleado(std::string nombre, std::string email, std::string password);
        
        std::string getNombre();
        std::string getEmail();
        std::string getPassword();
        void setNombre(std::string nombre);
        void setEmail(std::string email);
        void setPassword(std::string password);
        void addCargo(Cargo* cargo);
        
        void createCargo(std::string nombreHostal, tipoDeCargo cargo);
        Cargo getCargo(std::string nombreHostal);
        void crearLinkEmpleadoRespuesta(Respuesta resp);
        std::set<DTCargo> getCargos();
        std::set<std::string> getNombreHostales();
        void notificar(Calificacion nuevaCalificacion);

        ~Empleado();
    };

#endif
