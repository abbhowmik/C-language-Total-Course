#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;

    if (ptr == &arr[2])
    {
        printf("These points to the same location(third) of the memory\n");
    }
    else
    {
        printf("This not points to the same location of the memory\n");
    }

    return 0;
}