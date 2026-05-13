/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Documentación:
    Implementación de la clase StackDemo (EXTRA - Stack).

*/

#include <iostream>
#include "StackDemo.h"
 
using namespace std;
 
// Constructor por defecto.
StackDemo::StackDemo() {
}
 
void StackDemo::mostrarVariableLocal() {
    int variableLocal;
 
    cout << "Demostracion del stack con una variable local" << endl;
    cout << "Ingrese el valor de la variable local: ";
    cin >> variableLocal;
 
    cout << "Valor de la variable local: " << variableLocal << endl;
    cout << "Direccion de memoria de la variable local: " << &variableLocal << endl;
}
 
 
// Recorre recursivamente desde "nivel" hasta 1 imprimiendo, en cada
// llamada, el valor y la dirección de su propia variable local.
// Cada llamada crea un nuevo stack frame con una dirección distinta.
void StackDemo::mostrarLlamadasRecursivas(int nivel) {
    int variableLocal = nivel;
    cout << "Nivel de llamada: " << nivel << endl;
    cout << "Valor de la variable local: " << variableLocal << endl;
    cout << "Direccion de memoria de la variable local: " << &variableLocal << endl;
    cout << endl;
 
    if (nivel > 1) {
        mostrarLlamadasRecursivas(nivel - 1);
    }
}