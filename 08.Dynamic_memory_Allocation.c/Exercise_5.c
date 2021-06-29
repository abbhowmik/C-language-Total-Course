#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("\nEnter how many how many employee do you need?\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int)); // use of calloc
    for (int i = 0; i < n; i++)
    {
        printf("Enter No.%d employee's id\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("No.%d employee's id is %d\n", i + 1, ptr[i]);
    }
    free(ptr);

    printf("\n**Enter how many character do you want to take input as firstNew employee's id??\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter No.%d firstNew employee's id\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("No.%d firstNew employee's id is %d\n", i + 1, ptr[i]);
    }
    free(ptr);

    printf("\n***Enter how many character do you want to take input as secondNew employee's id??\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter No.%d seocndNew employee's id\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("No.%d seocndNew employee's id is %d\n", i + 1, ptr[i]);
    }
    free(ptr);

    return 0;
}
