#include <stdio.h>
#include <stdlib.h>

void func1(int array[]) //if we take void so there will be no return value
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, array[i]);
    }
    array[0] = 343; // if we change the value of array here it get reflected in main()
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of element of the array at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 34;
}

void func3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, array[i][j]);
        }
    }
}

int main()
{
    // int arr[] = {1, 3, 4, 5};
    int arr[2][2] = {{23, 34},
                     {3, 67}};
    // printf("The value at index 0 is %d\n", arr[0][0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}
