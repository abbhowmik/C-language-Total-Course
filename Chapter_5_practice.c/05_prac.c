#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    // printf("%d %d %d\n", number, ++number, number++);
    printf("The entered number is %d\n", number);
    printf("The entered number is %d\n", ++number);
    printf("The entered number is %d\n", number++);
    printf("The entered number is %d\n", number);

    return 0;
}