#include <stdio.h>
int main()
{
    float a = 4.00, b = 5.00;
    float *ptra = &a;
    float *ptrb = &b;
    printf("The sum of %0.2f and %0.2f is %0.2f\n", a, b, *ptra + *ptrb);
    printf("The average of %0.2f and %0.2f id %0.2f\n", a, b, (*ptra + *ptrb) / 2);
    return 0;
}
