#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>

class Fraccion
{
private:
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int n, d;
public:
    Fraccion(int n, int d = 1);
    int num();
    int den();
    Fraccion& operator*=(const Fraccion& rhs);
    Fraccion operator*(const Fraccion& rhs);
    Fraccion operator+(const Fraccion& rhs);
    friend std::ostream& operator<<(std::ostream& out, const Fraccion& f);
};

#endif // FRACCION_H
