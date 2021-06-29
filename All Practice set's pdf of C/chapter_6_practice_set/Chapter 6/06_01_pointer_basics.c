#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i (*j), means j is a poiners
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));
    return 0;
}