#include <stdio.h>
void w_rongswap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    //wrong_swap(x, y); // will not work due to call by value
    swap(&x, &y); // will work due to call by reference
    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    // it will right if we call this function here , but outside the function it can not change the origianl value of main function
    // if it will be a pointer, so we can change here , because pointer has the access of main variable's address, so if we change here, it's get reflected in the main function
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}