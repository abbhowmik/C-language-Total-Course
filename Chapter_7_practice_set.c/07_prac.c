#include <stdio.h>

void printTable(int *array, int num, int n)
{
    printf("The multliplication table of %d is as follow\n", num);
    for (int i = 0; i < n; i++)
    {
        array[i] = num * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, array[i]);
    }
    printf("**************-------------****************\n");
}

int main()
{
    int MulTable[3][10];

    printTable(MulTable[0], 2, 10);
    printTable(MulTable[2], 7, 10);
    printTable(MulTable[3], 9, 10);

    return 0;
}