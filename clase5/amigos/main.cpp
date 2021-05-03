#include <iostream>
#include "amigo.h"
#include "quincho.h"

using namespace std;

int main()
{
    Amigo amigos[5];
    amigos[0].setNom("Juan");
    amigos[0].setGastos(1000);
    amigos[1].setNom("Pedro");
    amigos[1].setGastos(500);
    amigos[2].setNom("Mateo");
    amigos[2].setGastos(10);
    amigos[3].setNom("Pepe");
    amigos[3].setGastos(0);
    amigos[4].setNom("Tito");
    amigos[4].setGastos(0);

    Quincho q(amigos);

    double montoPorPersona = q.calcularMontoPorPersona();

    for (int i = 0; i < 5; i++) {
        cout << amigos[i].getNom() << "  :  " << amigos[i].neto(montoPorPersona) << endl;
    }
    return 0;
}
