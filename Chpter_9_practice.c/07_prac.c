#include <stdio.h>
#include <string.h>

typedef struct Complex
{
    int real;
    int complex;
} comp;

int main()
{
    comp r;
    printf("Enter the value of real part of your number\n");
    scanf("%d", &r.real);
    printf("Enter the value of complex part of your number\n");
    scanf("%d", &r.complex);
    // r.real = 4;
    // r.complex = 6;
    printf("The form of complex number is %d + %di", r.real, r.complex);
    return 0;
}