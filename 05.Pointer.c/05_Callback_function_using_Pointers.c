// #include <stdio.h>
// #include <stdlib.h>

// int sum(int a, int b)
// {
//     return a + b;
// }

// int subs(int a, int b)
// {
//     return a - b;
// }

// void greetHelloAndExecute(int (*fptr)(int, int))
// {
//     printf("Hello Ashis\n");
//     printf("The sum of 5 and 7 is %d\n\n", fptr(5, 7));
// }

// void greetGoodMorningAndExecute(int (*fptr)(int, int))
// {
//     printf("Good morning user\n");
//     printf("The substraction of 5 and 7 is %d\n", fptr(5, 7));
// }

// int main()
// {

//     int (*ptr1)(int, int);
//     int (*ptr2)(int, int);
//     ptr1 = &sum;
//     ptr2 = &subs;
//     greetHelloAndExecute(ptr1);
//     greetGoodMorningAndExecute(ptr2);

//     return 0;
// }

// exercise based on callback function
#include <stdio.h>
#include <stdlib.h>

float avg(float c, float d)
{
    return ((c + d) / 2);
}

void greetGoodMorning(float (*fptr)(float, float))
{
    float c, d;
    printf("Enter the first number\n");
    scanf("%f", &c);
    printf("Enter the second number\n");
    scanf("%f", &d);

    float *ptr1 = NULL;
    ptr1 = &c;
    float *ptr2 = NULL;
    ptr2 = &d;
    printf("Good Morning, Ashis!\n");
    printf("The average value of your two number is %f\n\n", fptr(*ptr1, *ptr2));
}

void greetGoodEvening(float (*fptr)(float, float))
{
    float c, d;
    printf("Enter the first number\n");
    scanf("%f", &c);
    printf("Enter the second number\n");
    scanf("%f", &d);

    float *ptr1 = NULL;
    ptr1 = &c;
    float *ptr2 = NULL;
    ptr2 = &d;
    printf("Good Evening User!\n");
    printf("The average value of your two number is %f\n\n", fptr(*ptr1, *ptr2));
}

int main()
{
    float (*ptr)(float, float);
    ptr = &avg;

    greetGoodMorning(ptr);
    greetGoodEvening(ptr);
    return 0;
}