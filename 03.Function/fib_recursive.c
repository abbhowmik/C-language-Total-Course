// fibonachi series is like that (0, 1, 1, 2, 3, 5, 8, 13,)

#include <stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
        return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main()
{
    int number;
    printf("Enter the index of fibonachi series\n");
    scanf("%d", &number);
    printf("The value of fibonachi number at position No. %d using recursive approach is %d\n", number, fib_recursive(number));

    return 0;
}