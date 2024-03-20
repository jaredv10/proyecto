#include <iostream>

using namespace std;

void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

int ejercicio1() {

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);
    return 0;
}

void fun_a(int *px, int *py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam) {

    int f, i;
    int *b = a;

    for (f = 0, i = tam - 1; f < i; f++, i--) {
        fun_a(&b[f], &b[i]);
    }
}
//1. ¿Cuál es la dirección en memoria del arreglo array?

//La dirección inicial del arreglo array es 0x6bfd60.

//2. ¿Cuántos bytes se dedican para almacenar cada elemento de array?
//Cada elemento de array ocupa 4 bytes.

//3. ¿Cuál es la dirección y el contenido en memoria del elemento array[3]?

//La dirección del elemento array[3] se calcula como dirección_base(array) + (3 * sizeof(int)).
//En este caso, la dirección de array[3] es 0x6bfd68.
//El contenido de array[3] es el valor 3.

//4. ¿Qué efecto tiene la función fun_b sobre el arreglo array?
//La función fun_b invierte el orden de los elementos del arreglo array.
//Se puede observar en la salida del debugger que los valores del arreglo van cambiando a medida que se ejecuta la función.

//5. Describe el comportamiento de la función fun_b paso a paso.

//Paso 1:

//Se llama a la función fun_b(array, 10).
//Se asigna el valor 10 a la variable tam.
//Se crea un puntero b que apunta al primer elemento del arreglo array.

//Paso 2:

//Se inicia el bucle for (f = 0, i = tam - 1; f < i; f++, i--).
//Se inicializan las variables f e i a 0 y 9, respectivamente.
//Paso 3:


//Se ejecuta la instrucción fun_a(&b[f], &b[i]).
//Se llama a la función fun_a con los punteros a los elementos array[f] y array[i].
//La función fun_a intercambia los valores de los elementos a los que apuntan los punteros.

//Paso 4:

//Se incrementan los valores de f e i.

//Paso 5:

//Se repiten los pasos 3 y 4 hasta que f sea mayor o igual que i.

//Paso 6:

//La función fun_b termina.
