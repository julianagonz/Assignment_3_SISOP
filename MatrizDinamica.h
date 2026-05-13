/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

 ACTIVIDAD No. 4: MATRIZ 2D de enteros con asignación dinámica de memoria.
*/

#ifndef MATRIZDINAMICA_H
#define MATRIZDINAMICA_H

class MatrizDinamica {
private:
    int filas;     // número de filas de la matriz
    int columnas;  // número de columnas de la matriz
    int **matriz;  // puntero al arreglo de filas (matriz dinámica)

public:
    // Constructor: reserva memoria dinámica para una matriz de fxc.
    MatrizDinamica(int f, int c);

    // Llena la matriz con datos solicitados por teclado.
    void llenarMatriz();

    // Muestra por consola el contenido completo de la matriz.
    void mostrarMatriz();

    // Muestra la dirección de memoria de cada celda de la matriz.
    void mostrarDirecciones();

    // Destructor: libera la memoria dinámica de cada fila y del
    // arreglo de filas.
    ~MatrizDinamica();
};

#endif
