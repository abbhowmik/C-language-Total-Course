#include <stdio.h>
float fahrenhite(int cel)
{
    return (cel * 9 / 5) + 32;
}

int main()
{
    int cel;
    float far;
    printf("Enter the value in celcious\n");
    scanf("%d", &cel);
    far = fahrenhite(cel);
    printf("The value in fahrenhite temperature is %0.2f\n", far);
    return 0;
}