#include "empresa.h"
#include <algorithm>

Empresa::Empresa()
{

}

void Empresa::cargar(Empleado emp)
{
    this->empleados.push_back(emp);
}


/**
 * Hacer una sola función que se le pase la función mayor o menor y
 * que permita obtener los mayores o menores segun corresponda.
 */
vector<Empleado> Empresa::empleadosQueTrabajaronMaxHs()
{
    vector<Empleado> aux;

    if (!this->empleados.empty()) {
        sort(this->empleados.begin(), this->empleados.end(),
            [](Empleado emp1, Empleado emp2) -> bool {
                  return emp1.getHs() > emp2.getHs();
            });
        Empleado maximo = this->empleados[0];

        for(auto i = this->empleados.begin(); i < this->empleados.end(); ++i) {
            if (i->getHs() == maximo.getHs()) {
                aux.push_back(*i);
            } else {
                break;
            }
        }
    }

    return aux;
}

vector<Empleado> Empresa::empleadosQueTrabajaronMinHs()
{
    vector<Empleado> aux;

    if (!this->empleados.empty()) {
        sort(this->empleados.begin(), this->empleados.end(),
            [](Empleado emp1, Empleado emp2) -> bool {
                  return emp1.getHs() < emp2.getHs();
            });
        Empleado minimo = this->empleados[0];

        for(auto i = this->empleados.begin(); i < this->empleados.end(); ++i) {
            if (i->getHs() == minimo.getHs()) {
                aux.push_back(*i);
            } else {
                break;
            }
        }
    }

    return aux;
}

map<long, int> Empresa::dniRepetidos()
{
    map<long, int> dnis;
    for(auto i = this->empleados.begin(); i < this->empleados.end(); ++i) {
        dnis[i->getDni()]++;
    }

    map<long, int> dniRepetidos;
    for(auto i = dnis.begin(); i != dnis.end(); ++i) {
        if (i->second > 1) {
            dniRepetidos[i->first] = i->second;
        }
    }

    return dniRepetidos;
}
