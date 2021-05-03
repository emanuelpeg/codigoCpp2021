#include "quincho.h"

Quincho::Quincho(Amigo amigos[]){
    this->amigos = amigos;
}
double Quincho::calcularMontoTotal() {
    double resultado = 0.0;
    for (int i = 0; i < 5; i++) {
        resultado += this->amigos[i].getGastos();
    }
    return resultado;
}

double Quincho::calcularMontoPorPersona() {
    return this->calcularMontoTotal()/5;
}
