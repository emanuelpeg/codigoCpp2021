#include "fraccion.h"


Fraccion::Fraccion(int n, int d)
{
    this->n = n;
    this->d = d;
}

int Fraccion::num() { return this->n;}
int Fraccion::den() { return this->d;}


// a = a * n;
// a *= n
Fraccion& Fraccion::operator*=(const Fraccion& rhs)
{
    int mcd = gcd(n * rhs.n, d * rhs.d);
    n = (n * rhs.n)/mcd;
    d = (d * rhs.d)/mcd;
    return *this;
}

Fraccion Fraccion::operator*(const Fraccion& rhs)
{
    int mcd = gcd(n * rhs.n, d * rhs.d);
    int otro_n = (n * rhs.n)/mcd;
    int otro_d = (d * rhs.d)/mcd;
    Fraccion otra(otro_n, otro_d);
    return otra;
}

Fraccion Fraccion::operator+(const Fraccion& rhs)
{
    int mcd = gcd(n * rhs.n, d * rhs.d);
    int otro_d = (d * rhs.d)/mcd;
    int otro_n = (n * rhs.d + rhs.n * d)/mcd;

    Fraccion otra(otro_n, otro_d);
    return otra;
}

// cout << "mi fraccion" << f << endl;
std::ostream& operator<<(std::ostream& out, const Fraccion& f)
{
   return out << f.n << '/' << f.d ;
}
