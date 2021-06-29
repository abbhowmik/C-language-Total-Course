#include <stdio.h>
int main()
{
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    ptr1 = fopen("text.txt", "r");
    ptr2 = fopen("copytext.txt", "w");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}