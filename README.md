# README: ASSIGNMENT III

**Integrantes:** *Maria Lucía Castillo García, Juliana González Sánchez y Ana Daniela Paredes Tovar*

---

# 1.1 Descripción General

La presente actividad tiene como propósito estudiar y comprender el funcionamiento del direccionamiento de memoria en C++ mediante la implementación de distintos ejercicios relacionados con variables, punteros, referencias, memoria dinámica y regiones de memoria como stack y heap.

A lo largo de la actividad se desarrollan diferentes ejercicios prácticos que permiten observar cómo se almacenan los datos en memoria y cómo pueden manipularse utilizando herramientas fundamentales del lenguaje C++.

En particular, la actividad aborda los siguientes temas:

* Variables enteras y direcciones de memoria
* Uso de punteros
* Modificación de variables mediante punteros
* Referencias
* Arrays y direccionamiento
* Memoria dinámica con `new` y `delete`
* Funcionamiento del stack
* Funcionamiento del heap
* Llamadas recursivas y crecimiento del stack

El objetivo principal es visualizar y analizar el comportamiento de la memoria durante la ejecución de un programa.

---

# 1.2 Descripción de la Actividad

La actividad fue desarrollada en C++ utilizando programación orientada a objetos para separar cada ejercicio en diferentes clases y archivos fuente.

Cada actividad busca demostrar un concepto específico relacionado con memoria y direccionamiento.

La implementación incluye:

* Clases para encapsular variables y operaciones sobre memoria
* Uso de punteros para acceder y modificar valores
* Uso de referencias como alias de memoria
* Ejemplos de memoria automática (stack)
* Ejemplos de memoria dinámica (heap)
* Construcción dinámica de arreglos y matrices utilizando `new`
* Liberación manual de memoria utilizando `delete`

Además, se incluyen demostraciones adicionales para visualizar direcciones de memoria y observar diferencias entre stack y heap.

---

# 1.3 Estructura General de la Actividad

La actividad se compone de varios archivos fuente en C++ organizados por ejercicio y demostración.

## Archivos principales

`main.cpp`
Archivo principal encargado de ejecutar todas las actividades y demostraciones.

`VariableEntera.cpp / VariableEntera.h`
Implementación de la actividad relacionada con variables enteras y punteros.

`PunteroVariable.cpp / PunteroVariable.h`
Implementación de la actividad relacionada con punteros y referencias.

`ArregloEnteros.cpp / ArregloEnteros.h`
Implementación de la actividad relacionada con arreglos y direccionamiento mediante punteros.

`MatrizDinamica.cpp / MatrizDinamica.h`
Implementación de matrices dinámicas utilizando memoria reservada manualmente.

`StackDemo.cpp / StackDemo.h`
Demostración del funcionamiento del stack mediante variables locales y llamadas recursivas.

`HeapDemo.cpp / HeapDemo.h`
Demostración del funcionamiento del heap utilizando memoria dinámica.

`CodeDemo.cpp / CodeDemo.h`
Archivo utilizado para demostraciones adicionales y pruebas de ejecución relacionadas con memoria y direccionamiento.

`README.md`
Archivo de documentación de la actividad.

---

# 1.4 Programas Implementados

## Actividad No. 1 — Variables y Punteros

Se crea una variable entera y se realizan operaciones relacionadas con direccionamiento de memoria utilizando punteros.

El programa permite:

* Mostrar el valor de una variable
* Mostrar su dirección de memoria
* Modificar el valor utilizando punteros
* Observar cómo un puntero almacena la dirección de una variable

Durante la ejecución se utilizan los operadores `&` y `*` para acceder y modificar el contenido almacenado en memoria.

---

## Actividad No. 2 — Punteros y Referencias

Se trabaja con punteros y referencias para modificar el valor de una variable encapsulada dentro de una clase.

El programa permite:

* Modificar variables utilizando punteros
* Modificar variables utilizando referencias
* Comparar direcciones de memoria
* Observar cómo referencias y punteros acceden al mismo espacio de memoria

También se muestran las direcciones correspondientes a:

* La variable original
* El puntero
* La referencia

Esto permite analizar cómo las referencias funcionan como alias de una variable existente.

---

## Actividad No. 3 — Arrays y Direccionamiento

Se implementa un arreglo dinámico de enteros utilizando memoria reservada manualmente.

El programa permite:

* Reservar memoria dinámica para arreglos
* Llenar el arreglo por consola
* Modificar posiciones mediante aritmética de punteros
* Mostrar direcciones de memoria de cada elemento
* Liberar memoria utilizando `delete[]`

Cada elemento del arreglo puede ser accedido utilizando punteros y desplazamientos de memoria, permitiendo observar cómo se almacenan los elementos de forma contigua.

---

## Actividad No. 4 — Memoria Dinámica

Se implementa una matriz dinámica bidimensional utilizando memoria reservada en el heap mediante `new`.

El programa permite:

* Reservar memoria dinámica.
* Ingresar valores por consola
* Mostrar los valores almacenados en la matriz
* Visualizar las direcciones de memoria de cada posición
* Liberar manualmente la memoria utilizando `delete`

La matriz se construye utilizando punteros dobles (`int**`) y memoria dinámica para filas y columnas.

---

## Demostración del Stack

La demostración del stack utiliza variables locales y llamadas recursivas para visualizar cómo se comporta la memoria automática durante la ejecución del programa.

El programa muestra:

* Valor de variables locales
* Dirección de memoria de variables almacenadas en stack
* Niveles de llamadas recursivas
* Crecimiento del stack durante la recursión

Además, cada llamada recursiva crea un nuevo stack frame con una dirección de memoria diferente, permitiendo observar cómo se organiza la memoria automática.

---

## Demostración del Heap

La demostración del heap utiliza memoria dinámica creada mediante `new`.

El programa muestra:

* Dirección del puntero almacenado en stack
* Dirección de memoria reservada en heap
* Valores almacenados dinámicamente
* Liberación manual de memoria utilizando `delete` y `delete[]`

Además, se implementa un arreglo dinámico para observar cómo se almacenan estructuras reservadas dinámicamente dentro del heap.

---

## Demostración del CODE

La demostración del CODE permite observar la región de memoria donde se almacenan las funciones e instrucciones compiladas del programa.

El programa muestra:

* Ejecución de funciones almacenadas en el CODE
* Dirección de memoria de diferentes funciones
* Uso de punteros a función

Además, se utilizan `reinterpret_cast` y punteros a función para visualizar las direcciones correspondientes a las funciones del programa.


---

# 2. Formato de Entrada

El programa solicita diferentes valores por consola dependiendo de la actividad ejecutada.

Ejemplo:

```txt
Ingrese el valor inicial de la variable entera:
Ingrese el nuevo valor para modificar la variable:
Ingrese la cantidad de niveles:
Ingrese la cantidad de filas:
Ingrese la cantidad de columnas:
Ingrese el tamanio del arreglo dinamico:
```

En el caso de arreglos y matrices dinámicas, el usuario también debe ingresar los valores correspondientes a cada posición.

---

# 2.1 Formato de Salida

La salida del programa muestra:

* Valores almacenados
* Direcciones de memoria
* Cambios realizados mediante punteros
* Direcciones correspondientes al stack y heap

Ejemplo:

```txt
Valor de la variable: 10
Direccion de memoria de la variable: 0x61ff08
```

Ejemplo para llamadas recursivas:

```txt
Nivel de llamada: 3
Direccion de memoria de la variable local: 0x61fed4
```

Ejemplo para heap:

```txt
Direccion de memoria reservada en heap: 0x98ab20
```

---

# 2.2 Cumplimiento de los Requerimientos

La actividad cumple con los siguientes requerimientos:

## Implementación de actividades de memoria

* Variables y punteros
* Referencias
* Arrays y direccionamiento
* Memoria dinámica

## Uso de programación orientada a objetos

* Clases
* Encapsulamiento
* Separación en archivos `.h` y `.cpp`

## Gestión de memoria dinámica

* Uso de `new`
* Uso de `delete`

## Inclusión de documentación

* README con explicación de la actividad
* Explicación de compilación y ejecución

---

# 3. Compilación de la Actividad en Docker

La actividad fue preparada para compilarse y ejecutarse dentro de un contenedor Docker, permitiendo ejecutar el programa en un entorno controlado y con todas las dependencias necesarias.

Para construir la imagen Docker deben ejecutarse los siguientes comandos:

## Clonar el repositorio

```bash
git clone https://github.com/julianagonz/Assignment_3_SISOP.git
```

## Entrar a la carpeta del proyecto

```bash
cd Assignment_3_SISOP
```

## Construir la imagen Docker

```bash
docker build -t program .
```

Durante este proceso Docker compilará todos los archivos fuente de la actividad y generará una imagen lista para ejecutar el programa.

---

# 3.1 Ejecución en Docker

Una vez construida la imagen, el contenedor puede ejecutarse utilizando el siguiente comando:

```bash
docker run -it program
```

Al ejecutar el contenedor se iniciará el programa principal de la actividad, permitiendo interactuar con todas las demostraciones implementadas relacionadas con stack, heap, punteros, referencias y memoria dinámica.

---


# 3.2 Ejecución fuera de Docker

Si se desea compilar y ejecutar directamente con `g++`, pueden utilizarse los siguientes comandos.

## Compilación completa del programa

```bash
g++ main.cpp VariableEntera.cpp PunteroVariable.cpp ArregloEnteros.cpp StackDemo.cpp HeapDemo.cpp MatrizDinamica.cpp -o programa
```

## Compilación usando todos los archivos `.cpp`

```bash
g++ *.cpp -o programa
```

## Ejecución en Windows

```bash
programa.exe
```

## Ejecución en Linux / macOS

```bash
./programa
```

---
