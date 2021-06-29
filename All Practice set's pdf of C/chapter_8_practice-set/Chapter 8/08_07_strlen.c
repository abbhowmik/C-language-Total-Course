#include <stdio.h>
#include <string.h>

int main()
{
    char *st = "Harry"; // or char st[] = "Harry", one of this is used
    int a = strlen(st);
    printf("The length of string st is %d", a);
    return 0;
}