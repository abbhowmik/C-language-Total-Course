#include <stdio.h>
int fib_Series(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_Series(n - 1) + fib_Series(n - 2);
    }
}
int main()
{
    int number;
    printf("Enter the index of fibonachi series\n");
    scanf("%d", &number);
    printf("The value of fibonachi number at position No. %d using recursive approach is %d\n", number, fib_Series(number));

    return 0;
}