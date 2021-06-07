#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion f(2,3);
    Fraccion a(5,4); // 10/12 -> 5/6
    cout << f << endl;

    Fraccion f2 = f * a; //f.multiplica(a)
    cout << f2 << endl;

    return 0;
}
