#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
} vec;

int sumVector(int a, int b)
{
    return a + b;
}

int main()
{
    vec.x = 34;
    vec.y = 23;
    printf("The sum of two 2 dimensional vector is %d\n", sumVector(vec.x, vec.y));

    return 0;
}