#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (num % 97 == 0)
    {
        printf("Yes! %d is divide by 97\n", num);
    }
    else
    {
        printf("NO, %d is not divided by 97\n", num);
    }
    return 0;
}