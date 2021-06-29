#include <stdio.h>
int main()
{
    int num;
    FILE *ptr = NULL;
    ptr = fopen("Table.txt", "a");
    printf("Enter a number you want to see table of multliplicate\n");
    scanf("%d", &num);
    printf("This is the multliplication table of %d\n", num);
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, (num * i));
    }
    printf("\n");
    fclose(ptr);
    return 0;
}