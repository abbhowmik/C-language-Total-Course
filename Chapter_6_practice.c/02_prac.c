#include <stdio.h>
int nothing(int a)
{
    printf("The address of the variable is %u\n", &a);
}
int main()
{
    int i;
    printf("The address of i before passing in the function is %u\n", &i);
    nothing(i);

    // swap(&i)

    return 0;
}