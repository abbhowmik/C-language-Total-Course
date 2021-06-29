#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    int num1, num2, num3;
    ptr = fopen("intizers.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The first intizer in the file is %d\n", num1);
    printf("The second intizer in the file is %d\n", num2);
    printf("The third intizer in the file is %d\n", num3);

    return 0;
}