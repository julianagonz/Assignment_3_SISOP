/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Documentación:
    Programa principal del trabajo de clase sobre direccionamiento de
    memoria en C++. Integra todas las actividades:

        ACTIVIDAD 1: Variable entera + modificación con puntero
                     -> clase VariableEntera
        ACTIVIDAD 2: Puntero y referencia a una variable
                     -> clase PunteroVariable
        ACTIVIDAD 3: Arreglo de enteros + punteros
                     -> clase ArregloEnteros
        ACTIVIDAD 4: Memoria dinámica - matriz 2D con new/delete
                     -> clase MatrizDinamica
        EXTRA      : Stack, Heap y segmento CODE
                     -> clases StackDemo, HeapDemo y funciones de CodeDemo

    Compilación sugerida (g++ / PUJGCC):
        g++ -std=c++11 main.cpp variableEntera.cpp punteroVariable.cpp \
            arreglosEnteros.cpp matrizDinamica.cpp stackDemo.cpp \
            heapDemo.cpp CodeDemo.cpp -o programa
        ./programa
*/

#include <iostream>
#include "VariableEntera.h"
#include "PunteroVariable.h"
#include "ArregloEnteros.h"
#include "MatrizDinamica.h"
#include "StackDemo.h"
#include "HeapDemo.h"
#include "CodeDemo.h"

using namespace std;

int main() {

    // ============================================================
    // ACTIVIDAD No. 1: Variable entera y punteros
    // ============================================================
    int valorInicial;
    int nuevoValor;

    cout << "ACTIVIDAD No. 1: Variable entera y punteros" << endl;
    cout << "Ingrese el valor inicial de la variable entera: ";
    cin >> valorInicial;

    VariableEntera variable(valorInicial);

    cout << endl;
    cout << "Estado inicial:" << endl;
    variable.mostrarValor();
    variable.mostrarDireccion();

    cout << endl;
    cout << "Ingrese el nuevo valor para modificar la variable usando puntero: ";
    cin >> nuevoValor;

    variable.modificarConPuntero(nuevoValor);

    cout << endl;
    cout << "Estado despues de modificar con puntero:" << endl;
    variable.mostrarValor();
    variable.mostrarDireccion();

    // ============================================================
    // ACTIVIDAD No. 2: Puntero y referencia a una variable
    // ============================================================
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "ACTIVIDAD No. 2: Puntero y referencia a una variable" << endl;

    int valorInicial2;
    int valorPuntero;
    int valorReferencia;

    cout << "Ingrese el valor inicial de la variable: ";
    cin >> valorInicial2;

    PunteroVariable pv(valorInicial2);

    cout << endl;
    cout << "Estado inicial:" << endl;
    pv.mostrarValor();
    pv.mostrarDirecciones();

    cout << endl;
    cout << "Ingrese el nuevo valor para modificar usando puntero: ";
    cin >> valorPuntero;
    pv.modificarConPuntero(valorPuntero);
    pv.mostrarValor();

    cout << endl;
    cout << "Ingrese el nuevo valor para modificar usando referencia: ";
    cin >> valorReferencia;
    pv.modificarConReferencia(valorReferencia);
    pv.mostrarValor();

    cout << endl;
    cout << "Direcciones finales (variable, puntero y referencia):" << endl;
    pv.mostrarDirecciones();

    // ============================================================
    // ACTIVIDAD No. 3: Array de enteros y punteros
    // ============================================================
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "ACTIVIDAD No. 3: Array de enteros y punteros" << endl;

    int tamArreglo;
    int posicionModificar;
    int nuevoValorArreglo;

    cout << "Ingrese el tamanio del arreglo de enteros: ";
    cin >> tamArreglo;

    ArregloEnteros arreglo(tamArreglo);

    cout << endl;
    arreglo.llenarArreglo();

    cout << endl;
    cout << "Estado inicial del arreglo:" << endl;
    arreglo.mostrarArreglo();

    cout << endl;
    cout << "Direcciones antes de modificar:" << endl;
    arreglo.mostrarDirecciones();

    cout << endl;
    cout << "Ingrese la posicion que desea modificar usando puntero: ";
    cin >> posicionModificar;

    cout << "Ingrese el nuevo valor para esa posicion: ";
    cin >> nuevoValorArreglo;

    cout << endl;
    arreglo.modificarElementoConPuntero(posicionModificar, nuevoValorArreglo);

    cout << endl;
    cout << "Estado del arreglo despues de modificar con puntero:" << endl;
    arreglo.mostrarArreglo();

    cout << endl;
    cout << "Direcciones despues de modificar:" << endl;
    arreglo.mostrarDirecciones();

    // ============================================================
    // ACTIVIDAD No. 4: Memoria dinamica (matriz 2D)
    // ============================================================
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "ACTIVIDAD No. 4: Memoria dinamica" << endl;

    int filas, columnas;

    cout << "Ingrese la cantidad de filas: ";
    cin >> filas;

    cout << "Ingrese la cantidad de columnas: ";
    cin >> columnas;

    {
        // Se usa un bloque adicional para que el destructor de
        // MatrizDinamica se invoque justo al salir del bloque,
        // mostrando el mensaje "Memoria liberada correctamente."
        MatrizDinamica matriz(filas, columnas);

        cout << endl;
        matriz.llenarMatriz();

        cout << endl;
        matriz.mostrarMatriz();

        cout << endl;
        matriz.mostrarDirecciones();
    } // <-- aqui se destruye "matriz" y se libera la memoria

    // ============================================================
    // EXTRA: STACK
    // ============================================================
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "EXTRA: Demostracion del stack" << endl;

    int niveles;

    StackDemo demoStack;

    cout << endl;
    demoStack.mostrarVariableLocal();

    cout << endl;
    cout << "Ingrese la cantidad de niveles para observar llamadas en el stack: ";
    cin >> niveles;

    cout << endl;
    demoStack.mostrarLlamadasRecursivas(niveles);

    // ============================================================
    // EXTRA: HEAP
    // ============================================================
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "EXTRA: Demostracion del heap" << endl;

    HeapDemo demoHeap;

    cout << endl;
    demoHeap.mostrarVariableHeap();

    int tam;

    cout << endl;
    cout << "Ingrese el tamanio del arreglo dinamico: ";
    cin >> tam;

    cout << endl;
    demoHeap.mostrarArregloHeap(tam);

    // ============================================================
    // EXTRA: CODE (segmento de codigo / text segment)
    // ============================================================
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "EXTRA: Demostracion del segmento CODE" << endl;
    cout << endl;

    mostrarDireccionFuncion();

    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "Fin del programa." << endl;

    return 0;
}
