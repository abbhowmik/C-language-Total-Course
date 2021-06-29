#include <stdio.h>
int main()
{
    float celcious;
    printf("Enter the celcious value\n");
    scanf("%f", &celcious);
    printf("The value of your entered celcious in fahrenhite is %0.3f", (celcious * 9 / 5) + 32);
    return 0;
}
//(0°C × 9/5) + 32 = 32°F
