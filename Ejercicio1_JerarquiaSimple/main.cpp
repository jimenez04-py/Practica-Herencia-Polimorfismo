// Ejercicio 1 - Jerarquia simple
// Clase base Vehiculo y dos clases derivadas: Auto y Motocicleta

#include <iostream>
#include "Vehiculo.h"
#include "Auto.h"
#include "Motocicleta.h"

using namespace std;

int main() {
    cout << "===== EJERCICIO 1: JERARQUIA SIMPLE =====" << endl << endl;

    // un vehiculo "generico" para ver la version de la clase base
    Vehiculo v("Generico", "Base", 100);
    v.mostrarInfo();
    cout << endl;

    Auto a("Nissan", "Versa", 180, 4, "Gasolina");
    a.mostrarInfo();
    cout << endl;

    Motocicleta m("Italika", "FT150", 95, 150, false);
    m.mostrarInfo();
    cout << endl;

    // los getters de la clase base tambien funcionan en las hijas
    cout << "El " << a.getMarca() << " tiene " << a.getNumPuertas() << " puertas" << endl;
    cout << "La " << m.getMarca() << " es de " << m.getCilindrada() << " cc" << endl;

    return 0;
}
