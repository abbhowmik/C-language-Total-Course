// calculate factorial of a number

#include <stdio.h>

int calculateFactorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * calculateFactorial(num - 1));
    }
}

int main()
{
    int n;
    printf("Enter a number that you want to factoriate of\n");
    scanf("%d", &n);
    // int m = calculateFactorial(n);
    printf("The factorial of the number is %d\n", calculateFactorial(n));

    return 0;
}