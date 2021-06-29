#include <stdio.h>
#include <string.h>
int main()
{
    char str1[34];
    char str2[45];
    char c;
    int i = 0;

    printf("Enter the first string\n");
    scanf("%s", &str1);

    printf("Enter the second string character by character\n");
    while (c != '\n')
    {
        fflush(stdin); // as there are two scanf line by line
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';
    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);
    printf("Strcmp for these strings is %d\n", strcmp(str1, str2));

    return 0;
}
