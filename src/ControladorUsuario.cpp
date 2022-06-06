#include "../include/ControladorUsuario.h"

ControladorUsuario ControladorUsuario::getInstance(){}; 

std::set<DTUsuario> ControladorUsuario::obtenerUsuarios(){};

DTUsuario ControladorUsuario::seleccionarUsuario(){};

std::set<DTHostal> ControladorUsuario::hostales(){};

void ControladorUsuario::obtenerInformacionUsuario(){};

void ControladorUsuario::createCargo(std::string email, std::string nombreHostal, tipoDeCargo cargo){};

std::set<std::string> ControladorUsuario::getHostalEmpleado(std::string email){};

void ControladorUsuario::crearLinkEmpleado(Respuesta resp){};

Cargo ControladorUsuario::getCargo(std::string email, std::string nombreHostal){};

void ControladorUsuario::desasociarReserva(std::string emailHuesped, int codigoReserva){};

std::set<DTUsuario> ControladorUsuario::getHuespedesReservaGrupal(std::set<std::string> nomUsuarios){};

std::set<DTEmpleado> ControladorUsuario::empleadosNoAsociados(std::string nombreHostal){};

void ControladorUsuario::IngresarEsFinger(bool b){};

void ControladorUsuario::IngresarTipoDecargo(TipoDeCargo t){};

std::set<std::string> ControladorUsuario::getHuespedesEstadia(){};

bool ControladorUsuario::ingresarDatosusuario(DTUsuario dataUsuario){};

bool ControladorUsuario::ingresarEmail(std::string email){};

void ControladorUsuario::ingresarTipoDEcargo(TipoDeCargo t){};

void ControladorUsuario::seleccionarHostal(std::string nombreH){};

void ControladorUsuario::ingresarEsFinger(bool b){};

void ControladorUsuario::altaIngreso(){};
