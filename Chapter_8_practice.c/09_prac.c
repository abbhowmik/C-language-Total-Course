#include <stdio.h>
int characterPresentOrNOt(char st[], char c)
{
    char *ptr = st;
    int i = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            i++;
        }
        ptr++;
    }
    return i;
}

int main()
{
    char str[56] = "Ashis Bhowmik";
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    int val = characterPresentOrNOt(str, c);
    if (val > 0)
    {
        printf("Yes %c is present in the string\n", c);
    }
    else if (val == 0)
    {
        printf("%c is not present in the string\n", c);
    }
    return 0;
}
// #include <stdio.h>
// int characterPresentOrNOt(char st[], char c)
// {
//     char *ptr = st;
//     int i = 0;
//     while (*ptr != '\0')
//     {
//         if (*ptr == c)
//         {
//             i++;
//         }
//         ptr++;
//     }
//     return i;
// }

// int main()
// {
//     char str[56] = "Ashis Bhowmik";
//     char c = 'A';
//     int val = characterPresentOrNOt(str, c);
//     if (val > 0)
//     {
//         printf("Yes %c is present in the string\n", c);
//     }
//     else if (val == 0)
//     {
//         printf("%c is not present in the string\n", c);
//     }
//     return 0;
// }