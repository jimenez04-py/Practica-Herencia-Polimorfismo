#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

    // funcion auxiliar para sacar el maximo comun divisor (para simplificar)
    int mcd(int a, int b);
    void simplificar();

public:
    Fraccion(int numerador, int denominador);

    // sobrecarga del operador + para sumar dos fracciones
    Fraccion operator+(Fraccion otra);

    // sobrecarga del operador == para saber si son equivalentes (ej. 1/2 == 2/4)
    bool operator==(Fraccion otra);

    void mostrar();
};

#endif
