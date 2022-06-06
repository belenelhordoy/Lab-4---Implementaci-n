#ifndef CONTROLADORUSUARIO
#define CONTROLADORUSUARIO

#include <set>
#include <string>

#include "DTUsuario.h"
#include "DTHostal.h"
#include "tipoDeCargo.h"
#include "Cargo.h"
#include "DTEmpleado.h"

class DTUsuario;
class DTHostal;
class tipoDeCargo;
class Cargo;
class DTEmpleado;

class ControladorUsuario{
    private:
        DTUsuario dataUsuario;
        bool esFinger;
    public:
        ControladorUsuario getInstance(); 
        std::set<DTUsuario> obtenerUsuarios();
        DTUsuario seleccionarUsuario();
        std::set<DTHostal> hostales();
        void obtenerInformacionUsuario();
        void createCargo(std::string email, std::string nombreHostal, tipoDeCargo cargo);
        std::set<std::string> getHostalEmpleado(std::string email)
        void crearLinkEmpleado(Respuesta resp)
        Cargo getCargo(std::string email, std::string nombreHostal);
        void desasociarReserva(std::string emailHuesped, int codigoReserva);
        std::set<DTUsuario> getHuespedesReservaGrupal(std::set<std::string> nomUsuarios);
        std::set<DTEmpleado> empleadosNoAsociados(std::string nombreHostal);
        void IngresarEsFinger(bool b);
        void IngresarTipoDecargo(tipoDeCargo t);
        std::set<std::string> getHuespedesEstadia();
        bool ingresarDatosusuario(DTUsuario dataUsuario);
        bool ingresarEmail(std::string email);
        void ingresarTipoDEcargo(tipoDeCargo t);
        void seleccionarHostal(std::string nombreH);
        void ingresarEsFinger(bool b);
        void altaIngreso();
};

#endif
