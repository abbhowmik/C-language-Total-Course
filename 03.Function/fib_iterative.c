#include <stdio.h>
int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int number;
    printf("Enter the index of fibonachi series\n");
    scanf("%d", &number);
    printf("The value of fibonachi number at position No. %d using iterative approach is %d\n", number, fib_iterative(number));
    return 0;
}