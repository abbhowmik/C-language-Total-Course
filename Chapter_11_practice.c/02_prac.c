#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter the size of the array you want\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d element of the array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d No elemnt of the array is %d\n", i, ptr[i]);
    }
    // free(ptr);
    return 0;
}