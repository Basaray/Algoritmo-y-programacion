#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptrl = &arr[0];
    int *ptr2 = &arr[3];

    if (ptrl < ptr2) {
        printf("ptrl apunta a una direccion menor que ptr2\n");
    }else {
    printf("ptrl apunta a una dirrecion mayor o igual que ptr2\n");

    }



    return 0;
}
