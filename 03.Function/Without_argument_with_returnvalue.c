#include <stdio.h>
int takenumber()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    return a;
}

int main()
{
    int c;
    c = takenumber();
    printf("Your entered number is %d \n", c);
    return 0;
}
