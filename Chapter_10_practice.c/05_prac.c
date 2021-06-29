#include <stdio.h>
int main()
{
    int num;
    int num2 = 2 * num;

    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("in.txt", "r");
    fscanf(ptr1, "%d", &num);
    printf("Intizers = %d\n", num);

    ptr2 = fopen("in.txt", "w");
    fprintf(ptr2, "%d", num2);
    return 0;
}