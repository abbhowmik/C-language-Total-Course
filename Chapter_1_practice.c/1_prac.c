// (a) method
// #include <stdio.h>
// int main()
// {

//     // by hard coded input, means assinghing value
//     int width = 7, height = 23;
//     int area = width * height;
//     printf("The area of the rectangular is %d\n", area);
//     printf("%d", width);
//     return 0;
// }

//(b) method
#include <stdio.h>
int main()
{
    int width, height;
    printf("Enter the width of the rectangular\n");
    scanf("%d", &width);

    printf("Enter the height of the rectangular\n");
    scanf("%d", &height);

    printf("The area of the rectangular accordingly your value is %d\n", width * height);

    return 0;
}