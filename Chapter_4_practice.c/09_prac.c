#include <stdio.h>
int main()
{
    int num = 5, fac = 1, i = 0;
    while (num >= 1)
    {
        fac = fac * num;
        num--;
    }
    printf("the factorial 5 is %d", fac);

    return 0;
}