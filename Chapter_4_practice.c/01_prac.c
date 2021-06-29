#include <stdio.h>
int main()
{
    int number;
    printf("\n\nEnter the number that you want to multiplicate\n");
    scanf("%d", &number);
    printf("The multiplication of %d is as follow\n", number);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }
    return 0;
}