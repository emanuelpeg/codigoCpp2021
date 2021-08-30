#ifndef JUEGO_H
#define JUEGO_H
#include "secuencia.h"

class Juego
{
private:
    int puntaje = 0;
    Secuencia * unaSecuencia = 0;
public:
    Juego();
    void generarSecuencia();
    bool validar(int nro);
    int getPuntaje();
    int getPrimero();
    int getSegundo();
    int getCuarto();
    void timeOut();
};

#endif // JUEGO_H
