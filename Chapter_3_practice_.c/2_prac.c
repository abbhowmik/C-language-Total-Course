#include <stdio.h>
int main()
{
    int sb1, sb2, sb3;
    printf("Enter Student's 1 mark\n");
    scanf("%d", &sb1);
    printf("Enter Student's 2 mark\n");
    scanf("%d", &sb2);
    printf("Enter Student's 3 mark\n");
    scanf("%d", &sb3);

    if (sb1 < 33 || sb2 < 33 || sb3 < 33)
    {
        printf("You are fail because you got less than 33 marks in one or two subject");
    }
    else if (((sb1 + sb2 + sb3) / 3) >= 40)
    {
        printf("Congratulation! You passed in exam with above 40 percent");
    }
    return 0;
}