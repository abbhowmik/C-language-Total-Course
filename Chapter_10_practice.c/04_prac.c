#include <stdio.h>

int main()
{
    char character[56] = ", ";
    char name1[45];
    char name2[56];
    int salary1;
    int salary2;

    printf("Enter the name of first employee\n");
    scanf("%s", &name1);
    printf("Enter the salary of first employee\n");
    scanf("%d", &salary1);
    printf("Enter the name of second employee\n");
    scanf("%s", &name2);
    printf("Enter the salary of first employee\n");
    scanf("%d", &salary2);

    FILE *ptr = NULL;
    ptr = fopen("e.txt", "w");

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", character);
    fprintf(ptr, "%d\n", salary1);
    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", character);
    fprintf(ptr, "%d", salary2);

    return 0;
}