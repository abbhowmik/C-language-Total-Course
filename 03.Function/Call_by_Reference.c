// #include <stdio.h>
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y; //changes the values
//     *y = temp;
//     return;
// }
// int main()
// {
//     int a = 34, b = 4;
//     printf("a is %d and b is %d\n", a, b);
//     swap(&a, &b);
//     printf("a is %d and b is %d\n", a, b);

//     return 0;
// }

// #include <stdio.h>
// void changevalue(int *adress) // formal parameter, copied the main variable's value
// {

//     *adress = 4545;
//     return;
// }
// int main()
// {
//     int a = 34, b = 56;
//     printf("a is %d and b is %d\n", a, b);
//     changevalue(&a);
//     printf("now a is %d\n", a);
//     return 0;
// }

// Quick quiz
#include <stdio.h>
void practice(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - (*y * 2);
    return;
}
int main()
{
    int a = 4, b = 3;
    printf("The value of a is %d and the value of b is %d\n", a, b);
    practice(&a, &b);
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}