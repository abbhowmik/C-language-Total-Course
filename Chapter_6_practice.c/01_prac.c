#include <stdio.h>
int main()
{
    int a = 5;
    int *ptra = &a;
    printf("The address of the varible is %u\n", &a);     // of we can use ptra
    printf("the value of the variable is %d\n", *(ptra)); // here * operator known as dereference opereator
    // it basically shows the exact value inside the pointers and & operator used to get the address of the pointers stored variable

    return 0;
}