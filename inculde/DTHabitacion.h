#ifndef DTHABITACION
#define DTHABITACION

//Dejo reservas comentado porque se eliminó pero podría resultar necesario en algún caso de uso

class DTHabitacion {
    private:
        int numero;
        float precio;
        int capacidad;
        //int* reservas;
    public: 
        DTHabitacion(int numero, float precio, int capacidad/*, int* reservas*/);
        int getNumero();
        float getPrecio();
        int getCapacidad();
        //int* getReservas();
        ~DTHabitacion();
};

#endif
