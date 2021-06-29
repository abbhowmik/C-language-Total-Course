// // to find the sum of first n natural number
// #include <stdio.h>
// int main()
// {
//     int number, sum = 0;
//     printf("Enter the number\n");
//     scanf("%d", &number);
//     for (int i = 0; i <= number; i++)
//     {
//         sum = sum + i;
//     }

//     printf("The sum of %d is %d\n", number, sum);

//     return 0;
// }

// other shortcut method is below menioned
#include <stdio.h>
int main()
{
    int number, sum;
    printf("Enter the number:: ");
    scanf("%d", &number);
    sum = number * (number + 1) / 2;
    printf("The sum of your enter number is %d\n", sum);
    return 0;
}