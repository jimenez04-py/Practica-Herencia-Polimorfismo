#include "Motocicleta.h"
#include <iostream>

using namespace std;

Motocicleta::Motocicleta(string marca, string modelo, int velocidadMax,
                         int cilindrada, bool tieneSidecar)
    : Vehiculo(marca, modelo, velocidadMax) {
    this->cilindrada = cilindrada;
    this->tieneSidecar = tieneSidecar;
}

void Motocicleta::mostrarInfo() {
    cout << "[MOTO] " << marca << " " << modelo << endl;
    cout << "  Velocidad maxima: " << velocidadMax << " km/h" << endl;
    cout << "  Cilindrada: " << cilindrada << " cc" << endl;
    if (tieneSidecar) {
        cout << "  Sidecar: Si" << endl;
    } else {
        cout << "  Sidecar: No" << endl;
    }
}

int Motocicleta::getCilindrada() {
    return cilindrada;
}
