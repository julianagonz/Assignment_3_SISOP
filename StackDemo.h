/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Documentación:
    EXTRA: stack.
    En el stack se ubican las variables locales de cada función.
    Por cada llamada a función se crea un "stack frame" nuevo, por lo
    que las direcciones impresas en una llamada recursiva van
    cambiando.
*/

#ifndef STACKDEMO_H
#define STACKDEMO_H

class StackDemo {
public:
    // Constructor por defecto.
    StackDemo();
    void mostrarVariableLocal();

    // Realiza varias llamadas recursivas para observar cómo el stack
    // va apilando nuevos frames (las direcciones cambian en cada nivel).
    void mostrarLlamadasRecursivas(int nivel);
};

#endif
