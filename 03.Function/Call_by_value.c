#include <stdio.h>
int takenumber()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    return a;
}
int main()
{
    int b;
    b = takenumber();
    printf("Your entered number is %d\n", b);
    return 0;
}