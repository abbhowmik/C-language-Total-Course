// Write a C programme to calculate the power a number
// use of exponential function

#include <stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    long long int val = 1; // long long-- use for take a long type intizers
    for (int i = 0; i < b; i++)
    {
        val = val * a;
    }
    printf("The value of %d to the power %d is %lld", a, b, val);

    return 0;
}