// use of free last in the programme that the programme keep free up his space
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int n;

//     printf("Enter the size of the array you want to creat\n");
//     scanf("%d", &n);

//     ptr = (int *)calloc(n, sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value No. %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < n; i++) // does not executed four times as malloc defined that you need a 3 * sizeof(int)
//     {
//         printf("The value at %d of this array is %d\n", i, ptr[i]);
//     }

//     printf("Enter the size of the New array you want to creat\n");
//     scanf("%d", &n);

//     ptr = (int *)realloc(ptr, n * sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value No. %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < n; i++) // does not executed four times as malloc defined that you need a 3 * sizeof(int)
//     {
//         printf("The value at %d of this array is %d\n", i, ptr[i]);
//     }
//     free(ptr);

//     return 0;
// }

// use of free in the middle of  the programme that the programme keep free up his space and continue after operation with sufficient word and to get a bettter experience
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    int number;

    printf("Enter the size of the array you want to creat\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value No. %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++) // does not executed four times as malloc defined that you need a 3 * sizeof(int)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr);

    printf("Enter the number you want to multipliciate\n");
    scanf("%d", &number);
    printf("The multliplication table of %d is as follow: \n", number);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", number, i, i * number);
    }

    return 0;
}
