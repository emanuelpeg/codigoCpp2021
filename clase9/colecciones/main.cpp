#include <iostream>
#include "lista.h"
#include "vector.h"

using namespace std;

int main()
{
    Coleccion * c = new Vector();

    c->agregar(4);
    c->agregar(55);
    c->agregar(88);

    for (int i = 0; i<c->getCant(); i++) {
        cout << *c->get(i) << "  ";
    }
    cout << endl;

    c->remover(55);

    for (int i = 0; i<c->getCant(); i++) {
        cout << *c->get(i)<< "  ";
    }
    return 0;
}
