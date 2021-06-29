#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float result1, result2;
    float upperPlus, upperMinus, lower;
    float routeVal;
    printf("Enter the coefficient of x^2 : ");
    scanf("%d", &a);
    printf("Enter the coefficient of x : ");
    scanf("%d", &b);
    printf("Enter the constant value : ");
    scanf("%d", &c);
    routeVal = sqrt(b * b - 4 * a * c);
    if (routeVal > 0)
    {
        upperPlus = -b + routeVal;
        upperMinus = -b - routeVal;
        lower = 2 * a;
        result1 = upperPlus / lower;
        result2 = upperMinus / lower;
        printf("First squareRoot of your equation is %0.3f\n", result1);
        printf("Second squareRoot of your equation is %0.3f ", result2);
    }
    else
    {
        printf("Your Route vlaue in invalid or Imagiary");
    }

    return 0;
}