#include "Calculadora.h"
#include <iostream>

using namespace std;

// version 1: dos enteros
int Calculadora::sumar(int a, int b) {
    cout << "  (se uso sumar(int, int))" << endl;
    return a + b;
}

// version 2: tres enteros
int Calculadora::sumar(int a, int b, int c) {
    cout << "  (se uso sumar(int, int, int))" << endl;
    return a + b + c;
}

// version 3: dos decimales
double Calculadora::sumar(double a, double b) {
    cout << "  (se uso sumar(double, double))" << endl;
    return a + b;
}
