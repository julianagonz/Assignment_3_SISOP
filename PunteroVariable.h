/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

ACTIVIDAD No. 2: Puntero a una variable
*/

#ifndef PUNTEROVARIABLE_H
#define PUNTEROVARIABLE_H

class PunteroVariable
{

private:
    int valor;  // valor entero encapsulado por la clase

public:
    PunteroVariable(int valorInicial);
    void mostrarValor();
    void modificarConPuntero(int nuevoValor);
    void modificarConReferencia(int nuevoValor);
    void mostrarDirecciones();
};

#endif
