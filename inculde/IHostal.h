#ifndef IHostal
#define IHostal

#include <set>
#include <string>

#include "DTHostal.h"
#include "DTHabitacion.h"
#include "tipoDeConsumo.h"
#include "DTCalificacion.h"
#include "DTComentario.h"
#include "DTEmpleado.h"
#include "tipoDeCargo.h"

class DTHostal;
class DTHabitacion;
class tipoDeConsumo;
class DTCalificacion;
class DTComentario;
class DTEmpleado;
class tipoDeCargo;

class IHostal{
    public:
        IHostal();

        virtual std::set<DTHostal> imprimirHostales() = 0;
        virtual void seleccionarHostal(std::string nombreH) = 0;
        virtual void ingresarInfoHabitacion(DTHabitacion habitacion) = 0;
        virtual std::set<tipoDeConsumo> imprimirTiposDeConsumos() = 0;
        virtual void seleccionarTipoDeConsumo(int codigo) = 0;
        virtual bool existeHabitacion() = 0;
        virtual void darAltaHabitacion() = 0;
        virtual void darBajaHabitacion() = 0;
        virtual std::set<DTCalificacion> getCalificaciones() = 0;
        virtual DTCalificacion imprimirCalificacion()  = 0;
        virtual std::set<DTComentario> imprimirComentarios() = 0;
        virtual std::set<DTEmpleado> imprimirEmpleadosNoAsociados() = 0;
        virtual void asociarEmpleado(std::string emailEmpleado, tipoDeCargo cargo) = 0;
        virtual void darAltaAsociacion() = 0;
        virtual void darBajaAsociacion() = 0;
        virtual void finalizarAsignarEmpleado() = 0;
        virtual DTHostal obtenerHostal(std::string nombreH) = 0;
        virtual void getInfoHostal() = 0;
        virtual void getInfoReservasHostal() = 0;
        virtual void ingresarHostal(DTHostal infoHostal) = 0;

        ~IUsuario();
};

#endif
