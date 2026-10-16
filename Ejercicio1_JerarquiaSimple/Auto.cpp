#include "Auto.h"
#include <iostream>

using namespace std;

// primero se llama al constructor de Vehiculo y luego se llenan los atributos propios
Auto::Auto(string marca, string modelo, int velocidadMax,
           int numPuertas, string tipoCombustible)
    : Vehiculo(marca, modelo, velocidadMax) {
    this->numPuertas = numPuertas;
    this->tipoCombustible = tipoCombustible;
}

void Auto::mostrarInfo() {
    cout << "[AUTO] " << marca << " " << modelo << endl;
    cout << "  Velocidad maxima: " << velocidadMax << " km/h" << endl;
    cout << "  Puertas: " << numPuertas << endl;
    cout << "  Combustible: " << tipoCombustible << endl;
}

int Auto::getNumPuertas() {
    return numPuertas;
}
