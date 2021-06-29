#include <stdio.h>
#include <string.h>
void arrayRev(int arr[], int size)
{
    // arr[0] = 7;
    // arr[1] = 6;
    // arr[2] = 5;
    // arr[3] = 4; // array's value can change thus
    // arr[4] = 3;
    // arr[5] = 2;
    // arr[6] = 1;

    //the other method to apply this is bleow

    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before reversing, the array is like that\n");
    printf("{%d, %d, %d, %d, %d, %d, %d, %d}\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7]);
    // we can also use for loop

    arrayRev(arr, n);
    printf("After reversing, the array is like that\n");
    printf("{%d, %d, %d, %d, %d, %d, %d, %d}", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7]);

    return 0;
}
