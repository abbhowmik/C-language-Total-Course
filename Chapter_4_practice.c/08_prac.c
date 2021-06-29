#include <stdio.h>
int main()
{
    int number = 5, fac = 1;
    for (int i = 1; i <= 5; i++)
    {
        fac = fac * i;
    }
    printf("The factorial of %d is %d", number, fac);

    return 0;
}