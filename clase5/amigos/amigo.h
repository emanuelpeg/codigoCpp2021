#ifndef AMIGO_H
#define AMIGO_H


class Amigo
{
private:
    char * nombre;
    double gastos = 0.0;
public:
    Amigo();
    Amigo(char * nombre);
    void setGastos(double gastos);
    void setNom(char * nombre);
    char* getNom();
    double getGastos();
    double neto(double totalPorPersona);
};

#endif // AMIGO_H
