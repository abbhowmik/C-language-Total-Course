#include <stdio.h>

void slice(char str[], int m, int n)
{

    int i = 0;
    while (m + i < n)
    {
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char st[54] = "aAshisisagoodboy";
    slice(st, 1, 6);
    printf("The value of slilcing string is %s\n", st);
    return 0;
}