#include <stdio.h>
void printstar(int n) // this void means that it not return any value
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstar(7);
    return 0;
}
