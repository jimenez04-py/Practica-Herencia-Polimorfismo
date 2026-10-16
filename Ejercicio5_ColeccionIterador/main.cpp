// Ejercicio 5 - Coleccion con iterador
// Se guardan varios Vehiculo en un vector y se recorren con un iterador

#include <iostream>
#include <vector>
#include "Vehiculo.h"
#include "Auto.h"
#include "Motocicleta.h"

using namespace std;

int main() {
    cout << "===== EJERCICIO 5: COLECCION CON ITERADOR =====" << endl << endl;

    // vector de punteros a Vehiculo (asi tambien funciona el polimorfismo)
    vector<Vehiculo*> flota;

    flota.push_back(new Auto("Volkswagen", "Jetta", 200, 4, "Gasolina"));
    flota.push_back(new Motocicleta("Yamaha", "R3", 180, 321, false));
    flota.push_back(new Auto("Chevrolet", "Aveo", 170, 4, "Gasolina"));
    flota.push_back(new Motocicleta("Vento", "Rocketman", 110, 250, false));
    flota.push_back(new Auto("BYD", "Dolphin", 160, 5, "Electrico"));

    cout << "Total de vehiculos en la flota: " << flota.size() << endl << endl;

    // recorrido con iterador del lenguaje (vector<Vehiculo*>::iterator)
    // begin() apunta al primero y end() a "uno despues del ultimo"
    vector<Vehiculo*>::iterator it;
    int numero = 1;
    for (it = flota.begin(); it != flota.end(); ++it) {
        cout << numero << ") ";
        (*it)->mostrarInfo(); // *it es el Vehiculo*, y con -> llamo al metodo
        cout << endl;
        numero++;
    }

    // otro recorrido con iterador: buscar el mas rapido
    vector<Vehiculo*>::iterator masRapido = flota.begin();
    for (it = flota.begin(); it != flota.end(); ++it) {
        if ((*it)->getVelocidadMax() > (*masRapido)->getVelocidadMax()) {
            masRapido = it;
        }
    }
    cout << "El vehiculo mas rapido es: " << (*masRapido)->getMarca() << " "
         << (*masRapido)->getModelo() << " (" << (*masRapido)->getVelocidadMax()
         << " km/h)" << endl;

    // liberar memoria (tambien con iterador)
    for (it = flota.begin(); it != flota.end(); ++it) {
        delete *it;
    }
    flota.clear();

    cout << "Memoria liberada." << endl;
    return 0;
}
