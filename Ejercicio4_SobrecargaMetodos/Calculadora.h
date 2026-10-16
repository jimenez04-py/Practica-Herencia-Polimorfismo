#ifndef CALCULADORA_H
#define CALCULADORA_H

// Sobrecarga de metodos: mismo nombre (sumar) pero diferentes parametros.
// El compilador decide cual usar segun el numero y tipo de argumentos.
class Calculadora {
public:
    int sumar(int a, int b);
    int sumar(int a, int b, int c);
    double sumar(double a, double b);
};

#endif
