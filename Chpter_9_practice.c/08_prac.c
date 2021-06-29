#include <stdio.h>
#include <string.h>

typedef struct accountDetails
{
    char name[45];
    int accnum;
    char branch[67];
    char nameofbank[45];
    char ifsc_code[67];
    int year;
} details;

int main()
{
    details p1;
    p1.accnum = 12345678;
    strcpy(p1.name, "Ashis");
    strcpy(p1.branch, "Dhanirhat");
    strcpy(p1.nameofbank, "Central Bank Of India");
    strcpy(p1.ifsc_code, "CBI004565");
    p1.year = 2018;

    printf("The account Number of p1 is %d\n", p1.name);
    printf("The name of p1 is %s\n", p1.name);
    printf("The branch of the bank of p1 is %s\n", p1.branch);
    printf("The ifsc_code of the bank of p1 is %s\n", p1.ifsc_code);
    printf("p1 created an account in this bank in %d year", p1.year);

    return 0;
}