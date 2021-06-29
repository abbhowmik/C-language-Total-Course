#include <stdio.h>
int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // step (1) --> 6/3-3+1
    // step (2) -->2-3+1
    // step (3) -->0
    // its value is 0
    printf("The value is %d\n", result);

    return 0;
}