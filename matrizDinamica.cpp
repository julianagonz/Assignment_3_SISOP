/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Documentación:
    Implementación de la clase MatrizDinamica (ACTIVIDAD No. 4).
*/

#include <iostream>
#include "MatrizDinamica.h"

using namespace std;

// Constructor
MatrizDinamica::MatrizDinamica(int f, int c) {
    filas = f;
    columnas = c;
    matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
}

// Solicita por teclado cada uno de los valores de la matriz.
void MatrizDinamica::llenarMatriz() {
    cout << "Ingrese los valores de la matriz:" << endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Muestra por consola el contenido de la matriz en forma tabular.
void MatrizDinamica::mostrarMatriz() {
    cout << endl;
    cout << "Contenido de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Impresión
void MatrizDinamica::mostrarDirecciones() {
    cout << endl;
    cout << "Direcciones de memoria:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "&matriz[" << i << "][" << j << "] = "
                 << &matriz[i][j] << endl;
        }
    }
}

// Destructor
MatrizDinamica::~MatrizDinamica() {
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    cout << endl;
    cout << "Memoria liberada correctamente." << endl;
}
