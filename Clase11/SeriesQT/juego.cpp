#include "juego.h"
#include <cstdlib>
#include "secuenciapar.h"
#include "secuenciaimpar.h"
#include <stdlib.h>
#include <time.h>

Juego::Juego()
{
   this->generarSecuencia();
}

void Juego::generarSecuencia(){
    srand(time(NULL));
    if (this->unaSecuencia != 0) {
        delete unaSecuencia;
    }

    int aux = (rand() % 2);
    switch  (aux) {
    case 0 :
        this->unaSecuencia = new SecuenciaPar();
        break;
    default:
        this->unaSecuencia = new SecuenciaImpar();
        break;
    }
    this->unaSecuencia->generar();
}

bool Juego::validar(int nro) {
    if (this->unaSecuencia->getSec()[2] == nro) {
        this->puntaje++;
        return true;
    } else {
        this->puntaje--;
        return false;
    }
}

int Juego::getPrimero(){ return this->unaSecuencia->getSec()[0];}
int Juego::getSegundo(){ return this->unaSecuencia->getSec()[1];}
int Juego::getCuarto() { return this->unaSecuencia->getSec()[3];}
int Juego::getPuntaje(){ return this->puntaje;}

void Juego::timeOut() { this->puntaje--; }
