// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int *)malloc(3 * sizeof(int)); // means we requires a 3 intizers
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the value No. %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 3; i++) // does not executed four times as malloc defined that we need a 3 * sizeof(int)
//     {
//         printf("The value at %d of this array is %d\n", i, ptr[i]);
//     }
//     free(ptr); // it makes free the rest of the memory block after running the prograamme

//     return 0;
// }

// to print n size of array the below method is called
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;

    printf("Enter the size of the array you want to creat\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
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

    return 0;
}
