// // Pointer that not assin any value is called NULL pointer

// #include <stdio.h>
// int main()
// {
//     printf("Let's Learn about Pointers\n");
//     int a = 76;
//     int *ptra = &a;
//     int *ptr2 = NULL;                            // this is called null pointer
//     printf("The address of ptra is %x\n", ptra); // %x(hexadecimal) or %p is an example of format specifier refference example
//     printf("The value of a is %d\n", *ptra);
//     printf("The address of a is %p\n", &a);
//     printf("The address of pointer to a is %p\n", &ptra);
//     printf("The address of some garbage is %p\n", ptr2);
//     return 0;
// }

//int *ptr = NULL;
// this the symbol of NULL pointers
#include <stdio.h>
int main()
{
    int a = 23;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("the address of a is %d\n", *ptr);
    }
    else
    {
        printf("the pointer is a null pointers,so it can't be deferenced");
    }

    return 0;
}