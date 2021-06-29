#include <stdio.h>
int main()
{
    int principle = 100, rate = 2, years = 1;
    int simpleInterest = (principle * rate * years) / 100;
    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
}