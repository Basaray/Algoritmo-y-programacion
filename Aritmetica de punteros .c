#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Primer elemento: %d\n", *ptr);
    ptr++;
    printf("segundo elemento: %d\n", *ptr);
    ptr += 3;
    printf("cuarto elemento: %d\n", *ptr);

    return 0;
}
