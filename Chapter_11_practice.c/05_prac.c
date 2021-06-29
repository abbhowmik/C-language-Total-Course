#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", 10, i + 1, 10 * (i + 1));
    }
    printf("Now the modified table is\n");
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("%d X %d = %d\n", 15, i + 1, 15 * (i + 1));
    }
    free(ptr);

    return 0;
}