// #include <stdio.h>
// int main()
// {
//     //method 1: Using Print Commands
//     int table;
//     printf("\nEnter the number you want multiplication table of : ");
//     scanf("%d", &table);

//     printf("\nMultiplication table of %d is :", table);

//     printf("\n%d*1 = %d\n", table, table * 1);
//     printf("%d*2 = %d\n", table, table * 2);
//     printf("%d*3 = %d\n", table, table * 3);
//     printf("%d*4 = %d\n", table, table * 4);
//     printf("%d*5 = %d\n", table, table * 5);
//     printf("%d*6 = %d\n", table, table * 6);
//     printf("%d*7 = %d\n", table, table * 7);
//     printf("%d*8 = %d\n", table, table * 8);
//     printf("%d*9 = %d\n", table, table * 9);
//     printf("%d*10 = %d\n", table, table * 10);

//     return 0;
// }

// By loops
// #include <stdio.h>
// int main()
// {
//     //method 2: Using Loops
//     int table;
//     printf("\nEnter the number you want multiplication table of : ");
//     scanf("%d", &table);

//     printf("Multiplication table of %d is as follows:\n\n", table);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d*%d = %d\n", table, i, table * i);
//     }

//     return 0;
// }

// By mix
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);

    // printf("%d X 1 = %d\n", num, num*1);
    // printf("%d X 2 = %d\n", num, num*2);
    // printf("%d X 3 = %d\n", num, num*3);
    // printf("%d X 4 = %d\n", num, num*4);
    // printf("%d X 5 = %d\n", num, num*5);
    // printf("%d X 6 = %d\n", num, num*6);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}
