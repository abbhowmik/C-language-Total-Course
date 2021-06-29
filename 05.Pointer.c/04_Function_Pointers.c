#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2));

    int (*fptr)(int, int); // decleration of function pointers
    fptr = &sum;           // creating a function pointer
    int d = (*fptr)(4, 6);
    printf("The value of %d\n", d);

    return 0;
}
