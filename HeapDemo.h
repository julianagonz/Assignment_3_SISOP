/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

EXTRA: heap.
    Se imprimirán las direcciones para que se pueda comparar la zona del
    heap (donde está la memoria reservada) con la zona del stack
    (donde está el puntero que la apunta).
*/

#ifndef HEAPDEMO_H
#define HEAPDEMO_H

class HeapDemo {
public:
    
    HeapDemo(); // Constructor por defecto.
    void mostrarVariableHeap();
    void mostrarArregloHeap(int tamanio);
};

#endif
