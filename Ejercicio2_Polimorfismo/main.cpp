// Ejercicio 2 - Polimorfismo en accion
// Un arreglo de punteros a Vehiculo que guarda Autos y Motocicletas.
// Al llamar mostrarInfo() cada objeto responde con SU version.

#include <iostream>
#include "Vehiculo.h"
#include "Auto.h"
#include "Motocicleta.h"

using namespace std;

int main() {
    cout << "===== EJERCICIO 2: POLIMORFISMO EN ACCION =====" << endl << endl;

    const int TAM = 4;

    // arreglo de punteros a la clase base
    // (si lo hacia con objetos normales Vehiculo arr[4] se "cortaban" y salia la version de Vehiculo)
    Vehiculo* vehiculos[TAM];

    vehiculos[0] = new Auto("Toyota", "Corolla", 190, 4, "Gasolina");
    vehiculos[1] = new Motocicleta("Honda", "CB190R", 120, 190, false);
    vehiculos[2] = new Auto("Tesla", "Model 3", 225, 4, "Electrico");
    vehiculos[3] = new Motocicleta("Harley-Davidson", "Sportster", 170, 1200, true);

    // el mismo codigo para todos, pero cada uno imprime cosas distintas
    for (int i = 0; i < TAM; i++) {
        cout << "Vehiculo #" << (i + 1) << endl;
        vehiculos[i]->mostrarInfo();
        cout << "-----------------------------" << endl;
    }

    // liberar la memoria que pedimos con new
    for (int i = 0; i < TAM; i++) {
        delete vehiculos[i];
    }

    cout << "Memoria liberada." << endl;
    return 0;
}
