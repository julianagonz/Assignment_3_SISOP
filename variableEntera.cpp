/*
Integrantes: Maria Lucía Castillo García, Juliana González Sánchez y Ana Daniela Paredes Tovar.

Documentación:
    Implementación de la clase VariableEntera (ACTIVIDAD No. 1).
    Demuestra el direccionamiento de memoria sobre una variable entera:
    se obtiene su dirección con el operador & y se modifica indirectamente
    a través de un puntero que apunta a ella.
*/

#include <iostream>
#include "VariableEntera.h"

using namespace std;

// Constructor: guarda el valor inicial recibido por parámetro
// en el atributo "valor" del objeto.
VariableEntera::VariableEntera(int valorInicial) {
    valor = valorInicial;
}

// Muestra por consola el valor actual del atributo "valor".
void VariableEntera::mostrarValor() {
    cout << "Valor de la variable: " << valor << endl;
}

// Muestra por consola la dirección de memoria del atributo "valor"
// usando el operador & (referencia / "address-of").
void VariableEntera::mostrarDireccion() {
    cout << "Direccion de memoria de la variable: " << &valor << endl;
}

// Modifica el atributo "valor" de manera INDIRECTA:
// se crea un puntero local que apunta a "valor" y se reescribe
// el contenido al que apunta con *puntero = nuevoValor.
void VariableEntera::modificarConPuntero(int nuevoValor) {
    int *puntero = &valor;   // puntero almacena la direccion de "valor"
    *puntero = nuevoValor;   // se modifica el contenido apuntado
}
