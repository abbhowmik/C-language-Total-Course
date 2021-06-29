// find wheather a given number is prime or not
#include <stdio.h>
int main()
{
    int n;
    int prime = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}