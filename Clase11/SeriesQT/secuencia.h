#ifndef SECUENCIA_H
#define SECUENCIA_H


class Secuencia
{
protected:
    int sec[4];

public:
    Secuencia();
    virtual void generar()=0;
    int * getSec();
};

#endif // SECUENCIA_H
