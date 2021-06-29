/*
kms to miles
inches to foots
cms to inchs
pounds to kgs
inchs to meters

*/
#include <stdio.h>

int main()
{
    char choice;
    float kmsToMiles = 0.621371;
    float inchesToFoots = 0.0833333;
    float cmsToInchs = 0.393701;
    float poundsToKgs = 0.453592;
    float inchsToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("\nEnter your choice or *Press q to Quit**\n                 1.kms to miles\n                 2.inches to foots\n                 3.cms to inchs\n                 4.pounds to kgs\n                 5.inchs to meters\n");
        scanf("%c", &choice);

        switch (choice)
        {
        case 'q':
            printf("The programme is now Quitted, Thanks for using our code");
            goto end;
            break;

        case '1':
            printf("Enter the quantity in kms\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.3f kms == %.3f miles", first, second);
            break;

        case '2':
            printf("Enter the quantity in inchs\n");
            scanf("%f", &first);
            second = first * inchesToFoots;
            printf("%.3f inchs == %.3f foots", first, second);
            break;

        case '3':
            printf("Enter the quantity in cms\n");
            scanf("%f", &first);
            second = first * cmsToInchs;
            printf("%.3f cms == %.3f inchs", first, second);
            break;

        case '4':
            printf("Enter the quantity in pounds\n");
            scanf("%f", &first);
            second = first * poundsToKgs;
            printf("%.3f pounds == %.3f kgs", first, second);
            break;

        case '5':
            printf("Enter the quantity in inchs\n");
            scanf("%f", &first);
            second = first * inchsToMeters;
            printf("%.3f inchs == %.3f metes", first, second);
            break;

        default:
            break;
        }
    }
end:

    return 0;
}