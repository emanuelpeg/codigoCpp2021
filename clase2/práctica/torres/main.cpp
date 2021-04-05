#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef int Disco;

void MoverDiscos(unsigned short DiscoN, stack<Disco>& TorreOrigen, stack<Disco>& TorreAuxiliar, stack<Disco>& TorreDestino);
int main()
{
    stack<Disco> origen, aux, destino;
    origen.push(5);
    origen.push(4);
    origen.push(3);
    origen.push(2);
    origen.push(1);
    MoverDiscos(5, origen, aux, destino);

    while (!destino.empty()) {
        cout << destino.top() <<endl;
        destino.pop();
    }
    return 0;
}

void MoverDiscos(unsigned short DiscoN, stack<Disco>& TorreOrigen, stack<Disco>& TorreAuxiliar, stack<Disco>& TorreDestino)
{
    if(DiscoN == 1)
        {
            if(TorreOrigen.size())
            {
                TorreDestino.push(TorreOrigen.top());
                TorreOrigen.pop();
                cout << "Mueve" << endl;
            }
        }
    else
    {
        MoverDiscos(DiscoN-1, TorreOrigen, TorreDestino, TorreAuxiliar);
        if(TorreOrigen.size())
        {
            TorreDestino.push(TorreOrigen.top());
            TorreOrigen.pop();
            cout << "Mueve" << endl;
        }
        MoverDiscos(DiscoN-1, TorreAuxiliar, TorreOrigen, TorreDestino);
        }
}
