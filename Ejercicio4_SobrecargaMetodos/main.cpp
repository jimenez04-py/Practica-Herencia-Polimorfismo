// Ejercicio 4 - Sobrecarga de metodos
// Clase Calculadora con tres versiones de sumar()

#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    cout << "===== EJERCICIO 4: SOBRECARGA DE METODOS =====" << endl << endl;

    Calculadora calc;

    cout << "sumar(5, 7):" << endl;
    int r1 = calc.sumar(5, 7);
    cout << "  Resultado = " << r1 << endl << endl;

    cout << "sumar(10, 20, 30):" << endl;
    int r2 = calc.sumar(10, 20, 30);
    cout << "  Resultado = " << r2 << endl << endl;

    cout << "sumar(2.5, 3.75):" << endl;
    double r3 = calc.sumar(2.5, 3.75);
    cout << "  Resultado = " << r3 << endl << endl;

    // OJO: calc.sumar(2, 3.5) no compila porque es ambiguo
    // (el compilador no sabe si usar la de int o la de double)
    // por eso hay que mandar los dos como double:
    cout << "sumar(2.0, 3.5):" << endl;
    double r4 = calc.sumar(2.0, 3.5);
    cout << "  Resultado = " << r4 << endl;

    return 0;
}
