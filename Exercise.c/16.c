// write a programme to count Number of Digit in an Intizers
#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter an intizer numbers\n");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Intizers = %d", count);

    return 0;
}
