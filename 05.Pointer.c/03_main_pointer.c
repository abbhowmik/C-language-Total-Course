#include <stdio.h>

int main()
{
    printf("Let's Learn about pointers\n");
    int a = 76;
    int *ptra = &a;                         // here ptr reffers to a pointers
    printf("The value of a is %d\n", ptra); // %x(hexadecimal) or %p is an example of format specifier refference example
    printf("The value of a is %d\n", *ptra);
    printf("The address of a is %p\n", &a);
    printf("the address of the pointer a is %p\n", &ptra);
    return 0;
}
