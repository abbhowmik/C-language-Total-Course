#include <stdio.h>

int main()
{
    char s[34];
    printf("Enter your name: ");
    // scanf("%s", s);
    gets(s); // one of this used for take input and and scan....and we can take a multiline string
    printf("Your name is %s", s);
    // puts(s);// one of this is used to print
    return 0;
}