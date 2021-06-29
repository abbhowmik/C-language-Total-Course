// #include <stdio.h>
// int main()
// {
//     static int i = 5;
//     if (--i)
//     {
//         main();
//         printf("%d", i);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     int *const ptr = &x;
//     ++(*ptr);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     typedef int i;
//     i a = 0;
//     printf("%d", a);

//     return 0;
// }

#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i)
    {
        printf("%d", i);
    }
    return 0;
}