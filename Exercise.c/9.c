// revesing a string

#include <stdio.h>
#include <string.h>

void reverString(char arr[])
{
    int l = strlen(arr);
    int temp;
    for (int i = 0; i < (l / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[l - i - 1];
        arr[l - i - 1] = temp;
    }
    printf("The reversed string is %s\n", arr);
}

int main()
{
    char a[45];
    printf("Enter a string\n");
    scanf("%s", &a);
    reverString(a);

    return 0;
}