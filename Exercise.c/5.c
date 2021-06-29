// convert decimal to binary

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int a[45];
    int rev, i = 0;
    while (n > 0)
    {
        rev = n % 2;
        n = n / 2;
        a[i] = rev;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}