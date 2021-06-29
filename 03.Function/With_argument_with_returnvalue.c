
// #include <stdio.h>
// int sum(int a, int b); // this is called decleration of a function
// int main()
// {
//     int a, b, c;
//     a = 3;
//     b = 4;
//     c = sum(a, b);
//     printf("The sum is %d\n", c);
//     return 0;
// }

// int sum(int a, int b)
// {
//     return a + b;
// }

#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 3;
    b = 4;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
}
