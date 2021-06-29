#include <stdio.h>

void reverse(int *array, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("First the array looks like that --> {%d, %d, %d, %d, %d, %d, %d}\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);
    reverse(arr, 7);

    printf("Now the array looks like that --> {%d, %d, %d, %d, %d, %d, %d}\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);

    return 0;
}