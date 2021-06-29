#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character to check wheather it uppercase or lowercase character:  ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Yes your entered character is in lower case");
    }
    else
    {
        printf("No, Your entered character is not a lower case");
    }

    return 0;
}