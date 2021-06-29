// #include <stdio.h>
// int main()
// {
//     int marks[4]; // just initializatio and it represents a 1d array and it can store 4 size of an intizer variable

//     marks[0] = 23;
//     printf("Marks of student 1 is %d\n", marks[0]);
//     marks[0] = 1;
//     marks[1] = 35;
//     marks[2] = 53;

//     printf("Marks of student 1 is %d\n", marks[0]);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int marks[4];

//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the value of %d element of the array\n", i);
//         scanf("%d", &marks[i]);
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value of %d element of the array is %d\n", i, marks[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int marks[4] = {1, 2, 3, 4}; // direct initializisation and declearation

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }

    return 0;
}
