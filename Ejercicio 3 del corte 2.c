#include <stdio.h>

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int suma = 0;
    int *ptr = arreglo;

    for (int i = 0; i < n; i++) {
        suma += *(ptr + i); // Suma los elementos usando aritmética de punteros
    }

    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}

