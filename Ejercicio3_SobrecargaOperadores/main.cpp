// Ejercicio 3 - Sobrecarga de operadores
// Clase Fraccion con los operadores + y == sobrecargados

#include <iostream>
#include "Fraccion.h"

using namespace std;

int main() {
    cout << "===== EJERCICIO 3: SOBRECARGA DE OPERADORES =====" << endl << endl;

    Fraccion f1(1, 2);
    Fraccion f2(1, 3);
    Fraccion f3(2, 4);
    Fraccion f4(3, 4);

    // ---- prueba del operador + ----
    Fraccion suma = f1 + f2;
    f1.mostrar(); cout << " + "; f2.mostrar(); cout << " = "; suma.mostrar(); cout << endl;

    Fraccion suma2 = f3 + f4;
    f3.mostrar(); cout << " + "; f4.mostrar(); cout << " = "; suma2.mostrar(); cout << endl;

    cout << endl;

    // ---- prueba del operador == ----
    f1.mostrar(); cout << " == "; f3.mostrar(); cout << " ? ";
    if (f1 == f3) {
        cout << "Si son equivalentes" << endl;
    } else {
        cout << "No son equivalentes" << endl;
    }

    f1.mostrar(); cout << " == "; f2.mostrar(); cout << " ? ";
    if (f1 == f2) {
        cout << "Si son equivalentes" << endl;
    } else {
        cout << "No son equivalentes" << endl;
    }

    cout << endl;

    // caso con denominador 0 para ver que no truene
    Fraccion mala(5, 0);
    cout << "Fraccion creada: "; mala.mostrar(); cout << endl;

    return 0;
}
