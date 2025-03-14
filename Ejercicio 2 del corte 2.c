#include <stdio.h>

int main() {
    int y = 5;
    int *ptr = &y;

    *ptr = 20; // Cambia el valor de y a 20 usando ptr

    printf("Nuevo valor de y: %d\n", y);

    return 0;
}
