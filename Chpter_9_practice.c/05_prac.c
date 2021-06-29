#include <stdio.h>
#include <string.h>

struct complexNumber
{
    int real;
    int imaginary;
};

int main()
{
    struct complexNumber r, l;
    r.real = 4;
    l.imaginary = 6;

    printf("The complex number equation is--> %d + %di\n", r.real, l.imaginary);

    return 0;
}