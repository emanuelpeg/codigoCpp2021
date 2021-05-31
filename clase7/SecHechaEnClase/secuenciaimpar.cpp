#include "secuenciaimpar.h"
#include <stdlib.h>
#include <time.h>
SecuenciaImpar::SecuenciaImpar()
{

}

void SecuenciaImpar::generar(){
    srand(time(NULL));
    int aux = (rand() % 50) * 2;
    for(int i = 0; i<4; i++) {
        this->sec[i] = (i * aux) + 1;
    }
}
