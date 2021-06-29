#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(4, sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value at position %d of the array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of No.%d position of the array is %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}