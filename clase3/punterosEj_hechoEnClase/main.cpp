#include <iostream>

using namespace std;

int * add(int * vec, int cant, int nuevo) {
    int * aux = new int[cant + 1];
    for(int i = 0; i < cant; i++) {
        aux[i] = vec[i];
    }
    aux[cant] = nuevo;
    delete [] vec;
    return aux;
}

int * remove(int * vec, int cant, int pos) {
    if (pos >= cant) {
        return vec;
    }

    int * aux = new int[cant -1];

    for(int i = 0; i < pos; i++) {
        aux[i] = vec[i];
    }

    for(int i = pos + 1; i < cant; i++) {
        aux[i - 1] = vec[i];
    }
    delete [] vec;
    return aux;
}

int main()
{
    int * v = new int [5];
    v[0] = 5;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 6;

    int * aux = add(v, 5, 99);

//    for (int i = 0; i < 6; i++) {
//        cout << "aux[" << i <<"] =" << aux[i] << endl;
//    }

    aux = remove(aux, 6, 2);

    for (int i = 0; i < 5; i++) {
        cout << "aux[" << i <<"] =" << aux[i] << endl;
    }

    return 0;
}
