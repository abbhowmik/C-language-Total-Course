// #include <stdio.h>
// int main()
// {
//     int i = 9; //decleration and initialization both

//     switch (i)
//     {
//     case 5:
//         printf("Value is 7");
//         break;

//     case 0:
//         printf("Value is 8");
//         break;

//     case 9:
//         printf("Value is 9");
//         break;

//     default:
//         printf("Value is not present");
//         break;
//     }
//     return 0;
// }

// nested switch case statement
// switch (expression 1)
// {
//     Case 1 : printf(“Switch Statement 1”);

//     switch (expression 2)
//     {
//         Case 1 : printf(“Switch Statement 2”);
//         Break;

//         Case 2 : Do this;
//     }
//     break;

//     Case 2 : Do this;
// }

// example
#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;

        default:
            printf("your marks are not 45");
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("Age is not 3, 13 or 23\n");
    }

    return 0;
}
