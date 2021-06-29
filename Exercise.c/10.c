// find pirme number in a given range (between two number)

#include <stdio.h>

int Prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("The prime numbers between %d and %d are: ", a, b);
    for (int i = a; i <= b; i++)
    {
        if (Prime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}