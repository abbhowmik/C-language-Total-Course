#include <stdio.h>
void printStar(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    else
    {
        printStar(n - 1);
    }
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int n = 4;
    printStar(n);
    return 0;
}
