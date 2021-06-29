#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year as your wish\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Yes! Your entered year is a leap year");
    }
    else
    {
        printf("NO, Your entered year is not a leap year");
    }

    return 0;
}