#ifndef QUINCHO_H
#define QUINCHO_H
#include "amigo.h"

class Quincho
{
private:
    Amigo* amigos;
public:
    Quincho(Amigo amigos[]);
    double calcularMontoTotal();
    double calcularMontoPorPersona();
};

#endif // QUINCHO_H
