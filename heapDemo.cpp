/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Implementación de la clase HeapDemo (EXTRA - Heap):
*/

#include <iostream>
#include "HeapDemo.h"

using namespace std;
 
// Constructor por defecto.
HeapDemo::HeapDemo() {
}
 
/* Reserva una variable entera en el HEAP, solicita su valor al usuario 
y compara la dirección del puntero (stack) con la dirección apuntada (heap). */
void HeapDemo::mostrarVariableHeap() {
 
    int *variableHeap = new int;   // reserva memoria en el heap
    cout << "Demostracion del HEAP con una variable dinamica" << endl;
    cout << "Ingrese el valor a almacenar en la variable dinamica: ";
    cin >> *variableHeap;          // el usuario define el contenido
 
    cout << "Valor almacenado: " << *variableHeap << endl;
 
    cout << "Direccion de la variable puntero (stack): "
         << &variableHeap << endl;
 
    cout << "Direccion de memoria reservada en heap: "
         << variableHeap << endl;
 
    delete variableHeap;           // se libera la memoria del heap
    cout << "Memoria liberada correctamente." << endl;
}
 

/* Reserva un arreglo dinámico de tamaño enteros en el HEAP, le
/pide al usuario los valores por teclado e imprime cada elemento */
void HeapDemo::mostrarArregloHeap(int tamanio) {

    int *arreglo = new int[tamanio];   // arreglo dinamico en el heap
 
    cout << endl;
    cout << "Arreglo dinamico en heap" << endl;
    cout << "Ingrese los " << tamanio << " valores del arreglo:" << endl;

    for (int i = 0; i < tamanio; i++) {
        cout << "arreglo[" << i << "]: ";
        cin >> arreglo[i];
    }

    cout << endl;
    cout << "Contenido del arreglo dinamico y sus direcciones:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "arreglo[" << i << "] = "
             << arreglo[i]
             << " | Direccion: "
             << &arreglo[i]
             << endl;
    }
    delete[] arreglo;   // se libera el bloque dinamico
    cout << endl;
    cout << "Arreglo liberado correctamente." << endl;
}