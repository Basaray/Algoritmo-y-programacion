#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 42;
    int *ptr = &x;

    printf("Valor de x: %d\n",x);
    printf("El valor al que apunta ptr: %d\n",*ptr);

    *ptr = 100;
    printf("El nuevo valor de x: %d\n",x);
    return 0;
}
