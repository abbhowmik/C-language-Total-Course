// // by using  <string.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "Utttam Kumar";
//     char str1[45];
//     strcpy(str1, str);
//     printf("The value the target string is %s\n", str);
//     printf("The copied string is %s\n", str1);
//     return 0;
// }

// by making strcpy
#include <stdio.h>
void copyString(char str[])
{
    char *ptr = str;
    char st[45];
    int i = 0;
    while (*ptr != '\0')
    {
        st[i] = str[i];
        i++;
        ptr++; // or *ptr++;
    }
}
int main()
{
    char str[] = "Ashis Bhowmik";
    printf("The value the target string is %s\n", str);
    copyString(str);
    printf("The value of copy string is %s\n", str);

    return 0;
}
