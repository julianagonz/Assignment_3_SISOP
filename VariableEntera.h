/*
Integrantes: Maria Lucía Castillo García, Juliana González Sánchez y Ana Daniela Paredes Tovar.

Documentación:
    Clase asociada a la ACTIVIDAD No. 1 del trabajo de clase.
    Encapsula una variable entera (int) para poder:
        - mostrar su valor,
        - mostrar la dirección de memoria donde está almacenada,
        - modificar su valor de forma indirecta usando un puntero.
    El atributo "valor" se ubica en el stack del objeto, por lo que su
    dirección refleja la posición de memoria asignada al campo del
    objeto en tiempo de ejecución.
*/

#ifndef VARIABLEENTERA_H
#define VARIABLEENTERA_H

class VariableEntera {
private:
    int valor;  // valor entero encapsulado por la clase

public:
    // Constructor: inicializa el atributo "valor" con el valor recibido.
    VariableEntera(int valorInicial);

    // Imprime por consola el valor actual de la variable.
    void mostrarValor();

    // Imprime por consola la dirección de memoria del atributo "valor".
    void mostrarDireccion();

    // Modifica el valor del atributo de forma indirecta usando un puntero
    // local que apunta a "valor".
    void modificarConPuntero(int nuevoValor);
};

#endif
