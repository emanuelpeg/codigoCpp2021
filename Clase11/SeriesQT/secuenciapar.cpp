#include "secuenciapar.h"
#include <stdlib.h>
#include <time.h>

SecuenciaPar::SecuenciaPar()
{

}

void SecuenciaPar::generar(){
    srand(time(NULL));
    int aux = (rand() % 50) * 2;
    for(int i = 0; i<4; i++) {
        this->sec[i] = (i + 1) * aux;
    }
}
