#include "amigo.h"

Amigo::Amigo() {
}

Amigo::Amigo(char * nombre) {
    this->nombre = nombre;
}
void Amigo::setGastos(double gastos){
    this->gastos = gastos;
}
double Amigo::getGastos() {
    return  this->gastos;
}
double Amigo::neto(double totalPorPersona) {
    return this->gastos - totalPorPersona;
}

void Amigo::setNom(char * nombre) {
    this->nombre = nombre;
}

char* Amigo::getNom() {
    return this->nombre;
}
