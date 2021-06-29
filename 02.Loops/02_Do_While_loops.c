// it's syntax is looked like that
// do
// {
//    statements );
// } while (test condition);

// example
// #include <stdio.h>
// int main()
// {
//     int n, sum = 0;
//     do
//     {
//         printf("Enter a number: ");
//         scanf("%i", &n);
//         sum += n;
//     } while (n != 0);
//     printf("Sum is = %d", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     do
//     {
//         printf("Hello World\n");
//     } while (1 < 0);
// }
// so we can say that do_while loops minimum exicuted atleast 1

#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index++;
    } while (index < num);

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int number, index = 0;
//     printf("Enter the number\n");
//     scanf("%d", &number);
//     do
//     {
//         printf("%d\n", index + 1);
//         index++;
//     } while (index < number);

//     return 0;
// }