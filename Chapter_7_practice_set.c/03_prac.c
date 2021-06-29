// #include <stdio.h>
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int num = 5;
//     for (int i = 1; i < 11; i++)
//     {
//         printf("%d X %d = %d\n", num, i, num * i);
//     }

//     return 0;
// }

// // // other(important) method is
#include <stdio.h>
int main()
{
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d\n", (i + 1), mul[i]);
    }

    return 0;
}
