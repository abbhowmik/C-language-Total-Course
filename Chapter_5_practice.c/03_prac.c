#include <stdio.h>
float massCalculate(int m)
{
    float acc = 9.8;
    return acc * m;
}
int main()
{
    int mass;
    float force;
    printf("enter the mass of the body\n");
    scanf("%d", &mass);
    force = massCalculate(mass);
    printf("The force of attraction is %0.2f\n", force);

    return 0;
}