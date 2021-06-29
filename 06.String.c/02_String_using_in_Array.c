// firstly string is not a data type in c programming language, it is a array of many characters
#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'A', 's', 'h', 'i', 's', '\0'}; // lower part is as same, it is Null turminated string(mendetaru)
    // char str[6] = "Ashis";// at least given value is [6] or upper 6, not less than 6
    char str[34];
    gets(str); // it basically take a input (scan this) from user
    printf("Using costom function\n");
    printStr(str);
    printf("Using printf is %s\n", str);
    printf("By Using puts\n");
    puts(str);
    return 0;
}