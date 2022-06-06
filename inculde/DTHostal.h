#ifndef DTHOSTAL
#define DTHOSTAL

#include <string>

class DTHostal {
    private:
        std::string nombre;
        std::string direccion;
        std::string telefono;
        float calificacionPromedio;
    public: 
        DTHostal(std::string nombre, std::string direccion, std::string telefono, float calificacionPromedio);
        
        std::string getNombre();
        std::string getDireccion();
        std::string getTelefono();
        float getCalificacionPromedio();
        
        ~DTHostal();
};

#endif
