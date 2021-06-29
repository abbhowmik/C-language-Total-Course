#include <stdio.h>
int main()
{
    int n = 45;
    int prime;
    for (int i = 2; i < 45; i++)
    {
        if (n % i == 0)
        {
            prime == 1;
            break;
        }
    }

    if (prime)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}