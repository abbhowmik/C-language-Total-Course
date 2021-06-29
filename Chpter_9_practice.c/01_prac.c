#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector vec;
    vec.x = 56;
    vec.y = 34;
    printf("The dimension of x is %d, dimension of y is %d\n", vec.x, vec.y);

    return 0;
}
// this is the process to make a two dimesional  vector by structure