// reversing a number
#include <stdio.h>
#include <stdlib.h>

int revNumber(int number)
{
    int originalNumber = number;
    int rev = 0;
    while (number != 0)
    {
        rev = rev * 10 + number % 10;
        number = number / 10;
    }
    printf("your Number's reversed form is %d\n", rev);
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    revNumber(n);
    return 0;
}