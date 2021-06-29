#include <stdio.h>

void printAdd(int a)
{
    printf("The address of variable a is %u\n", &a);
}

int main()
{
    int i = 4;
    printf("the address of i is %u\n", &i);
    printAdd(i);
    printf("The address of variable (after running) i is %u\n", &i);
    return 0;
}