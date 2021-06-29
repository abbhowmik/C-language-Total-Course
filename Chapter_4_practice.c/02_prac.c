
#include <stdio.h>
int main()
{
    int num = 10;
    printf("the multiplication table of %d is as follow\n", num);
    for (int i = 10; i != 0; i--)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}