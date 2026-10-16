#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

// Clase base: todos los vehiculos tienen marca, modelo y velocidad maxima
class Vehiculo {
protected:
    // protected para que Auto y Motocicleta puedan usarlos
    std::string marca;
    std::string modelo;
    int velocidadMax; // en km/h

public:
    Vehiculo(std::string marca, std::string modelo, int velocidadMax);

    // virtual para que las clases hijas lo puedan sobrescribir
    virtual void mostrarInfo();

    // destructor virtual (lo vimos en clase, es para que se borren bien las hijas)
    virtual ~Vehiculo();

    std::string getMarca();
    std::string getModelo();
    int getVelocidadMax();
};

#endif
