#include <stdio.h>
#include <stdlib.h>
int *functionDangling()
{
    int a = 2, b = 6, sum;
    sum = a + b;
    return &sum; // it returns the address of sum but as a and b is a local variable it becames destroyed after executing this, so then the pointer has no vlaue
}
int main()
{
    // Case:1--> De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 3;
    ptr[2] = 4;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointers for free function

    // Case:2--> Function returning local variable address
    int *dangPtr = functionDangling(); // ptr is now a dangling pointers for free function

    // Case:3--> If a variable goes out of scope
    int *danglingPtr3;
    {
        int a = 12;
        danglingPtr3 = &a;
    } // this open and closed's code is called scope under main
    // here variable goes out of scope
    return 0;
}