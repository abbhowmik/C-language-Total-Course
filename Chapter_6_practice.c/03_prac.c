#include <stdio.h>
void changeVal(int *address)
{
    *address = 100;
    return;
}

int main()
{
    int a = 10;
    printf("The value of a (before reference) is %d\n", a);

    changeVal(&a);
    printf("The value of a (after reference) is %d\n", a);

    return 0;
}
