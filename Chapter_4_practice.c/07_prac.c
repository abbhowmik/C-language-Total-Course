#include <stdio.h>
int main()
{
    int num = 8, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, i * 8);
        sum = sum + i * 8;
    }
    printf("the value of sum is %d", sum);
    return 0;
}
