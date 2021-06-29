// //realloc (is calloc+realloc) syntax(ptr, n*sizeof(int)), it reserves extra space of memory as our wish
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
//     free(ptr);

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

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;

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

    printf("Enter the size of the New array you want to creat\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value No. %d of first New array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++) // does not executed four times as malloc defined that you need a 3 * sizeof(int)
    {
        printf("The value at %d of first New array is %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}
