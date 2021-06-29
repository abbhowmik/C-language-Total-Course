#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *arrayptr = arr;

    printf("The value at position 1 of the array is %d\n", arr[0]);
    printf("The value at position 2 of the array is %d\n\n", arr[1]);

    printf("The address of the first element of the array is %d\n", arr); // arry takes 4 bytes
    printf("The address of the second element of the array is %d\n\n", arr + 1);

    printf("The address of the first element of the  array is %d\n", &arr[0]);
    printf("The address of the second element of the  array is %d\n\n", &arr[1]);

    // arrayptr++; // this is right
    // arr++ // is not right

    printf("The value at address 1st element is %d\n", *arr);       //by *pointers
    printf("The value at address 2nd element is %d\n", *(arr + 1)); //by *pointers deference

    return 0;
}