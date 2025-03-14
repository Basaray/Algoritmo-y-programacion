#include <stdio.h>

int main() {

    int valores[] = {10, 20, 30, 40};

    int *p1 = valores; // p1 apunta al primer elemento del arreglo

    int *p2 = valores + 3; // p2 apunta al cuarto elemento del arreglo

    // a) p1 == p2

    if (p1 == p2) {

        printf("a) Verdadero\n");

    } else {

        printf("a) Falso\n");

    }

    // b) p1 < p2

    if (p1 < p2) {

        printf("b) Verdadero\n");

    } else {

        printf("b) Falso\n");

    }

    // c) p1 >= (valores + 4)

    if (p1 >= (valores + 4)) {

        printf("c) Verdadero\n");

    } else {

        printf("c) Falso\n");

    }
    return 0;

}
