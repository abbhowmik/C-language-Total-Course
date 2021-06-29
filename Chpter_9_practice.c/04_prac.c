#include <stdio.h>
#include <string.h>
struct useOfArrowKey
{
    int code;
    char character;
    char name[45];
};

int main()
{
    struct useOfArrowKey a;
    struct useOfArrowKey *ptr;
    ptr = &a;
    ptr->code = 45;
    ptr->character = 'c';
    strcpy(ptr->name, "Ashis");
    printf("The character of a is %c\n", a.character);
    printf("The name of a is %s\n", a.name);

    return 0;
}