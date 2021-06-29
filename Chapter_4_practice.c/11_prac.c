#include <stdio.h>
int main()
{
    int n = 7, i = 2, prime;
    while (n > i)
    {
        if (n % i == 0)
        {
            prime == 1;
            break;
        }
        i++;
    }
    if (prime)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }

    return 0;
}