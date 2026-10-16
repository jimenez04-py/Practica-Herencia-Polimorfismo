#include "Fraccion.h"
#include <iostream>

using namespace std;

Fraccion::Fraccion(int numerador, int denominador) {
    // no se puede dividir entre 0
    if (denominador == 0) {
        cout << "Error: el denominador no puede ser 0, se usara 1" << endl;
        denominador = 1;
    }
    this->numerador = numerador;
    this->denominador = denominador;
}

int Fraccion::mcd(int a, int b) {
    // algoritmo de Euclides
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraccion::simplificar() {
    int divisor = mcd(numerador, denominador);
    if (divisor != 0) {
        numerador = numerador / divisor;
        denominador = denominador / divisor;
    }
}

// a/b + c/d = (a*d + c*b) / (b*d)
Fraccion Fraccion::operator+(Fraccion otra) {
    int nuevoNum = numerador * otra.denominador + otra.numerador * denominador;
    int nuevoDen = denominador * otra.denominador;

    Fraccion resultado(nuevoNum, nuevoDen);
    resultado.simplificar();
    return resultado;
}

// dos fracciones son equivalentes si a*d == c*b (multiplicacion cruzada)
bool Fraccion::operator==(Fraccion otra) {
    return numerador * otra.denominador == otra.numerador * denominador;
}

void Fraccion::mostrar() {
    cout << numerador << "/" << denominador;
}
