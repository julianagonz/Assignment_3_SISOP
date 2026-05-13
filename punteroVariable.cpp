/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Documentación:
    Implementación de la clase PunteroVariable (ACTIVIDAD No. 2).
*/

#include <iostream>
#include "PunteroVariable.h"

using namespace std;

// Constructor
PunteroVariable::PunteroVariable(int valorInicial) // Inicializa el atributo privado "valor" con el dato recibido.
{
    valor = valorInicial;
}


void PunteroVariable::mostrarValor()
{
    cout << "Valor actual: " << valor << endl;
}


// Modificar el valor de la variable utilizando un puntero.
void PunteroVariable::modificarConPuntero(int nuevoValor)
{
    int *puntero = &valor;     // puntero guarda la direccion de "valor"
    *puntero = nuevoValor;     // se modifica el dato apuntado

    cout << "Valor modificado con puntero." << endl;
    cout << "Direccion almacenada por el puntero: " << puntero << endl;
}


// Modificar usando una referencia
void PunteroVariable::modificarConReferencia(int nuevoValor)
{
    int &referencia = valor;   // alias del atributo "valor"
    referencia = nuevoValor;   // modifica "valor" directamente

    cout << "Valor modificado con referencia." << endl;
    cout << "Direccion de la referencia: " << &referencia << endl;
}

// Mostrar las direcciones
void PunteroVariable::mostrarDirecciones()
{
    int *puntero = &valor;
    int &referencia = valor;

    cout << "Direccion de la variable: "
         << &valor << endl;
    cout << "Direccion almacenada en el puntero: "
         << puntero << endl;
    cout << "Direccion de la referencia: "
         << &referencia << endl;
}
