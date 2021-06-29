#include <stdio.h>

int occurences(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char str[56] = "AshisBhowmik";
    char c = 'i';
    int number = occurences(str, c);
    printf("Occurences of %c in the string is  %d", c, number);

    return 0;
}