#include <stdio.h>
#include <math.h>
int main()
{

    int p, t;
    float r, si, amount, ci;
    printf("please enter principal, time and rate of interest\n");
    scanf("%d %d %f", &p, &t, &r);
    si = p * t * r / 100;
    printf("simple interest = %f, si");
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("compound interest = %f", ci);

    return 0;
}