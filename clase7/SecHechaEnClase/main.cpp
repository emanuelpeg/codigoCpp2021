#include <iostream>
#include "juego.h"


using namespace std;

int main()
{
    srand(time(NULL));
    char salida;
    Juego juego;
    do {
        cout << "La secuencia es : " << endl;
        cout << juego.getPrimero() << " " << juego.getSegundo() << " __ " << juego.getCuarto()<<endl;
        int aux;
        cout << " Ingrese el nro : ";
        cin >> aux;
        if (juego.validar(aux)) {
            cout << "Ganaste  " ;
        } else {
            cout << "Perdiste ";
        }
        cout << juego.getPuntaje() << endl;
        cout << "desea seguir (N/Y) ";
        cin >> salida;
        cout << endl;

        if (salida == 'Y' || salida == 'y' ) {
            juego.generarSecuencia();
        }

    } while (salida == 'Y' || salida == 'y');


    return 0;
}
