// find the greatest number of an array
#include <stdio.h>
#include <stdlib.h>

int maximum(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    // array[0] = 0;
    return max;
}
int main()
{

    int arr[] = {4, 3, 2, 4, 6, 56, 4, 3, 43, 4, 34, 9};
    int maxVal = maximum(arr, 12);
    printf("The maximum value in the array is %d\n", maxVal);
    return 0;
}