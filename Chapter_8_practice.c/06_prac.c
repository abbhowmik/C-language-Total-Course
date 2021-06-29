// encryption of a message
#include <stdio.h>
void encrypt(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char str[] = "Ashis Bhowmik";
    encrypt(str);
    printf("The Encrypt value is %s\n", str);
    return 0;
}