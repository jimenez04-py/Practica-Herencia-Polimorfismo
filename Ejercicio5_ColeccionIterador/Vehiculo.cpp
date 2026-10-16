#include "Vehiculo.h"
#include <iostream>

using namespace std;

Vehiculo::Vehiculo(string marca, string modelo, int velocidadMax) {
    this->marca = marca;
    this->modelo = modelo;
    this->velocidadMax = velocidadMax;
}

void Vehiculo::mostrarInfo() {
    cout << "Vehiculo: " << marca << " " << modelo << endl;
    cout << "  Velocidad maxima: " << velocidadMax << " km/h" << endl;
}

Vehiculo::~Vehiculo() {
    // no hay nada que liberar aqui
}

string Vehiculo::getMarca() {
    return marca;
}

string Vehiculo::getModelo() {
    return modelo;
}

int Vehiculo::getVelocidadMax() {
    return velocidadMax;
}
