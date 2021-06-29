
// decryption of a message
#include <stdio.h>
void decrypt(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char str[] = "Btijt!Cipxnjl";
    decrypt(str);
    printf("The decrypt value is %s\n", str);
    return 0;
}