#include <stdio.h>
#include <stdlib.h>

int revNumber(int num)
{
    int rev = 0;
    int originalNumber = num;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("The entered number's reversed form is %d\n", rev);
}
int main()
{

    int number;
    printf("Enter a number that you want to see reversed form\n");
    scanf("%d", &number);
    revNumber(number);

    return 0;
}
