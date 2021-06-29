#include <stdio.h>

// #include "Array_pointer2.c" // this copied all the directories of the array_pointer file
#define PI 3.14        // defining of preprocesser variable
#define SQUARE(r) r *r // it called macro

int main()
{
    float var = PI;
    int r = 4;
    printf("The area of the circle is %0.3f\n", PI * SQUARE(r));
    printf("The value of PI is %0.3f\n", PI);
    printf("The value of PI is %0.3f\n", var);
    return 0;
}
