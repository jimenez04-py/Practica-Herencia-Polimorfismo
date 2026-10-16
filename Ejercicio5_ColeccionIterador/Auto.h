#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

// Auto hereda de Vehiculo (herencia publica)
class Auto : public Vehiculo {
private:
    int numPuertas;       // atributo propio
    std::string tipoCombustible; // gasolina, diesel, electrico...

public:
    Auto(std::string marca, std::string modelo, int velocidadMax,
         int numPuertas, std::string tipoCombustible);

    // sobrescribimos el metodo de la clase base
    void mostrarInfo() override;

    int getNumPuertas();
};

#endif
