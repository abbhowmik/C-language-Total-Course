#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number that you want to see in the form of multiplication\n");
    scanf("%d", &number);
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = number * (i + 1);
    }

    printf("This is the multlipication table of %d\n", number);

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", number, i + 1, mul[i]);
    }

    return 0;
}