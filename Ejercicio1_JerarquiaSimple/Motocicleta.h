#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include "Vehiculo.h"

class Motocicleta : public Vehiculo {
private:
    int cilindrada;   // en cc
    bool tieneSidecar;

public:
    Motocicleta(std::string marca, std::string modelo, int velocidadMax,
                int cilindrada, bool tieneSidecar);

    void mostrarInfo() override;

    int getCilindrada();
};

#endif
