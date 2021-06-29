#include <stdio.h>
void changeVal(int x)
{
    x = 100;
    return;
}

int main()
{
    int a = 10;
    printf("The value of a (before passing) is %d\n", a);

    changeVal(a);
    printf("The value of a (after passing) is %d\n", a);

    return 0;
}
// it does not change the value outside the changeVal funcion