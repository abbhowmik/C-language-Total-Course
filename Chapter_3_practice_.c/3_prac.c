#include <stdio.h>
int main()
{
    float income;
    printf("Enter your income per year in Lakh\n");
    scanf("%f", &income);

    if (income <= 2.5)
    {
        printf("You have to paid no tax to Goverment");
    }
    else if (income <= 5.0)
    {
        printf("You have to paid 5 percent income tax to Goverment");
    }
    else if (income <= 10.0)
    {
        printf("You have to paid 20 percent income tax to Goverment");
    }

    else
    {
        printf("You have to pay 30 percent tax to goverment");
    }

    return 0;
}