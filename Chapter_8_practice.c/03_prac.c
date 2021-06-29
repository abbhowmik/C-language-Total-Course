#include <stdio.h>

int calculateLength(char str[])
{
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    return length;
}

int main()
{
    char st[45] = "Harry";
    int l = calculateLength(st);
    printf("The length of the string is %d\n", l);

    return 0;
}