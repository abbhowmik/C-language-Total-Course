#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int l = strlen(str);
    int temp;
    for (int i = 0; i < (l / 2); i++)
    {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
    printf("The revesed string is %s", str);
}

int main()
{
    char st[45];
    printf("Enter a string\n");
    scanf("%s", &st);
    reverseString(st);

    return 0;
}
