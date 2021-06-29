#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 23;
    int *ptr; // it is a wild pointer because it is not initialized
    // *ptra = &a; this is not a good thing
    ptr = &a;
    printf("The value of a is %d\n", *ptr);

    return 0;
}