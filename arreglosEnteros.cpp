/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Implementación de la clase ArregloEnteros (ACTIVIDAD No. 3).
*/

#include <iostream>
#include "ArregloEnteros.h"

using namespace std;


// Constructor: valida el tamaño recibido y reserva memoria dinámica
// para un arreglo de enteros. Inicializa todas las posiciones en 0.
ArregloEnteros::ArregloEnteros(int tamanioInicial) {
    if (tamanioInicial > 0) {
        tamanio = tamanioInicial;
    }
    else {
        tamanio = 1;
    }
    /*
        Se reserva memoria dinámica para un arreglo de enteros. El tamaño ya no es fijo.
        Depende del valor ingresado por el usuario.
    */
    arreglo = new int[tamanio];
    int i = 0;
    while (i < tamanio) {
        arreglo[i] = 0;
        i++;
    }
}


// Destructor: libera la memoria dinámica reservada en el constructor.
ArregloEnteros::~ArregloEnteros() {
    delete[] arreglo; // Se libera la memoria dinámica reservada en el constructor.
}

// Solicita por teclado cada uno de los valores del arreglo.
void ArregloEnteros::llenarArreglo() {
    int i = 0;
    while (i < tamanio) {
        cout << "Ingrese el valor de arreglo[" << i << "]: ";
        cin >> arreglo[i];
        i++;
    }
}


// Imprime por consola todos los elementos del arreglo.
void ArregloEnteros::mostrarArreglo() {
    int i = 0;
    cout << "Contenido del arreglo:" << endl;
    while (i < tamanio) {
        cout << "arreglo[" << i << "] = " << arreglo[i] << endl;
        i++;
    }
}


// Modifica una posición del arreglo usando un puntero y aritmética de punteros
// Si la posición no es válida, lo informa por consola.
void ArregloEnteros::modificarElementoConPuntero(int posicion, int nuevoValor) {
    if (posicion >= 0 && posicion < tamanio) {
        /*  El puntero apunta al primer elemento del arreglo.
            Como arreglo fue creado dinámicamente, arreglo ya funciona
            como un puntero hacia la primera posición. */
        int *puntero = arreglo;

        /*   
            puntero + posicion apunta a la posición que queremos modificar.
            *(puntero + posicion) accede al contenido de esa posición.
        */
        *(puntero + posicion) = nuevoValor;
        cout << "Elemento modificado correctamente usando puntero." << endl;
    }
    else {
        cout << "La posicion ingresada no es valida." << endl;
    }
}


/* Muestra la dirección base del arreglo, la dirección almacenada
en el puntero local, la direccion de la propia variable puntero
(ubicada en el stack) y la direccion de cada elemento del arreglo. */
void ArregloEnteros::mostrarDirecciones() {
    int *puntero = arreglo;
    cout << "Direccion base del arreglo: " << arreglo << endl;
    cout << "Direccion almacenada en el puntero: " << puntero << endl;
    cout << "Direccion de la variable puntero: " << &puntero << endl;
    cout << endl;
    cout << "Direcciones de cada elemento del arreglo:" << endl;
    int i = 0;
    while (i < tamanio) {
        cout << "Direccion de arreglo[" << i << "]: " << (puntero + i) << endl;
        i++;
    }
}
