#include <stdio.h>

int main() {
    float *p = (float *)0x1000;
    float *p3 = p + 3;

    printf("Dirección de p: %p\n", (void*)p);
    printf("Dirección de p + 3: %p\n", (void*)p3);

    return 0;
}

