// #include <stdio.h>
// int main()
// {
//     int x;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Hey Guys");
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Type any No. & To Exit : Press 1\n");
//             scanf("%d", &x);
//             if (x == 1)
//             {
//                 goto end; // This goto will transfer the control to end: i.e. out of both loop
//             }
//         }
//     }
// end:
//     printf("For loops are skipped as you pressed 1");
//     return 0;
// }

// as same example
#include <stdio.h>
int main()
{
    int a;
    for (int i = 0; i < 2; i++)
    {
        printf("Hey gues\n");
        for (int j = 0; j < 2; j++)
        {
            printf("Type any Number or press 1 to quit\n");
            scanf("%d", &a);
            if (a == 1)
            {
                printf("As you pressed 1, so the programme is now quitting");
                goto end;
            }
        }
    }
end:
    return 0;
}
