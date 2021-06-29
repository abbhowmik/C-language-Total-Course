//break statement's example
#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 5; i++)
    {
        printf("Iteration time = %d\nEnter Your Age : ", i);
        scanf("%d", &age);

        if (age > 10)
        {
            printf("Age is gratter than 10\n");
            break; // Checking Break Statement
        }
        else if (age < 10)
        {
            printf("Age is less than 10\n");
            continue;
        }
        // printf("Hey Guys\n");
        // printf("This code is printed coz if condition is not satisfied. \n");
        // printf("Checking Continue Statement\n\n"); // Checking Continue Statement
    }
    return 0;
}

// continue statment example

//break statement's example
// #include <stdio.h>
// int main()
// {
//     int i, age;
//     for (i = 0; i < 5; i++)
//     {
//         printf("Iteration time = %d\nEnter Your Age : ", i);
//         scanf("%d", &age);

//         // if (age > 10)
//         // {
//         //     printf("Age is gratter than 10");
//         //     break; // Checking Break Statement
//         // }
//         if (age < 10)
//         {
//             printf("Age is less than 10\n");
//             continue;
//         }
//         // printf("Hey Guys\n");
//         // printf("This code is printed coz if condition is not satisfied. \n");
//         // printf("Checking Continue Statement\n\n"); // Checking Continue Statement
//     }
//     return 0;
// }
