#include <stdio.h>
int countPositiveIntizers(int *arr, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            count++;
    }
    return count;
}

int main()
{
    int arr[] = {2, -1, 5, 6, 0, -2, 3, 45, -3};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Numbers of Positive elements = %d\n", countPositiveIntizers(arr, n));
    return 0;
}