// for (initialize counter; test counter; increment / decrement counter)
// {
//set of statements
// }

// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     int i;
//     for (i = 0; i < num; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// nested for loop's example
// for (initialization; test condition; increment)
// {
// for (initialization; test condition; increment)
// {
// set of statements
// }
// set of statements
// }

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0, j = 4; i < 5; i++)
    {
        printf("%d  %d\n", i, j); // so loops executed j's(second argument's condition)
    }

    return 0;
}