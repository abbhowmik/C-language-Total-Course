
// #include <stdio.h>
// int sum_of_natural_numbers(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     printf("Sum of % d Natural Numbers is %d\n", n, sum_of_natural_numbers(n));
//     return 0;
// }

// sum of natural numbers using recursion in c
#include <stdio.h>
int sum_of_natural_numbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum_of_natural_numbers(n - 1);
}
int main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("Sum of %d Natural Numbers is %d\n ", n, sum_of_natural_numbers(n));
    return 0;
}

// #include <stdio.h>
// int sum_of_natural_numbers(int n)
// {
//     if (n != 0)
//     {
//         return (n + sum_of_natural_numbers(n - 1));
//     }
// }
// int main()
// {
//     int n;
//     printf("\nEnter the number: ");
//     scanf("%d", &n);
//     printf("Sum of %d Natural Numbers is %d\n ", n, sum_of_natural_numbers(n));
//     return 0;
// }
