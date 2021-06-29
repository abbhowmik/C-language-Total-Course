// // by for loops
// #include <stdio.h>
// int main()
// {
//     int sum = 0, n = 10;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     printf("Sum = %d", sum);

//     return 0;
// }

// by do while loops
#include <stdio.h>
int main()
{
    int i = 1, sum = 0, n = 10;
    do
    {
        sum = sum + i;
        i++;
    } while (n >= i);
    printf("The sum is %d", sum);
    return 0;
}