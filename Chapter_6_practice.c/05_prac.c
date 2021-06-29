#include <stdio.h>
int main()
{
    int i = 4;
    int *ptri = &i;
    int **ptr_ptri = &ptri;
    printf("the value of i by pointer to pointer (ptr_ptri) is %d\n", **ptr_ptri);

    return 0;
}