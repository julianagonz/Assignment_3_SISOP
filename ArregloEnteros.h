/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Actividad No.3: Array de número enteros (int)
*/

#ifndef ARREGLOENTEROS_H
#define ARREGLOENTEROS_H

class ArregloEnteros {
private:
    int *arreglo;   // puntero al primer elemento del arreglo dinamico
    int tamanio;    // numero de elementos reservados en el arreglo

public:

    // Reserva memoria dinámica para crear un arreglo de enteros del
    // tamaño solicitado. Si el tamaño no es válido (<= 0) se usa 1.
    ArregloEnteros(int tamanioInicial);     // Constructor de la clase


    // Libera la memoria reservada con new[] usando delete[].
    ~ArregloEnteros(); // Destructor de la clase

    // Llena el arreglo solicitando valores por teclado.
    void llenarArreglo();

    // Muestra por consola el contenido completo del arreglo.
    void mostrarArreglo();

    // Modifica una posición del arreglo usando aritmética de punteros.
    void modificarElementoConPuntero(int posicion, int nuevoValor);

    // Muestra la dirección base del arreglo, la del puntero, la de
    // la variable puntero y la de cada elemento del arreglo.
    void mostrarDirecciones();
};

#endif
