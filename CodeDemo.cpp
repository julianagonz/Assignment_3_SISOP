/*
Integrantes:
- Maria Lucía Castillo García
- Juliana González Sánchez
- Ana Daniela Paredes Tovar

Documentación:
    Implementación (EXTRA - Segmento CODE).
*/

#include <iostream>
#include "CodeDemo.h"

using namespace std;


void funcionEjemplo() {
    cout << "Hola desde funcionEjemplo() (segmento CODE)." << endl;
}

/*Imprime la dirección de memoria de la función "funcionEjemplo".
Importante tener presente que esa dirección vive en el segmento CODE (text segment) del proceso
y es diferente de las direcciones del stack y del heap. */
void mostrarDireccionFuncion() {
    cout << "Demostracion del segmento CODE" << endl;
    funcionEjemplo(); // Actúaa como puntero a la funcion.
    cout << "Direccion de funcionEjemplo (segmento CODE): "
         << reinterpret_cast<void*>(&funcionEjemplo) << endl;

    cout << "Direccion de mostrarDireccionFuncion (segmento CODE): "
         << reinterpret_cast<void*>(&mostrarDireccionFuncion) << endl;
}
