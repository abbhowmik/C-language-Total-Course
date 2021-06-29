// #include <stdio.h>
// int main()
// {
//     short a = 10; //initializing variable of short data type,it is typecasting
//     int b;        //declaring int variable 'b'.
//     b = a;        //Implicit type casting
//     printf("%d\n", a);
//     printf("%d\n", b);
// }

#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("A is %d\n", a);
    // printf("Enter the value of b\n");
    // scanf("%f", &b);
    // printf("The value of b is %0.2f", b);
    // scanf("%f", &b);
    // printf("B is %d\n", (int)b);
    printf("Type any character : \n");
    scanf(" %c", &c);
    printf("Character is %d", (int)c);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a = 3;
//     float b = (float)54 / 5;
//     printf("The Value of a is %0.3f\n", b);
//     return 0;
// }
