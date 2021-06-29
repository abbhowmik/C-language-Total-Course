// we have to make a calculator using command line by c programming
// in terminal we have to first write the name of the exe file
// then we have to declear which operation we want to perform
// then we have to enter two number as per follow
// example---> ./exercise_7.c.exe  add 4 5
// output is 9

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("Operation is %s\n", operation);
    printf("Num1 is %d\n", num1);
    printf("Num2 is %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("The addition of your two number is %d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("The substraction of your two number is %d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("The multiplication of your two number is %d\n", num1 * num2);
    }

    else if (strcmp(operation, "divide") == 0)
    {
        printf("The division of your two number is %d\n", num1 / num2);
    }
    else
    {
        printf("Please enter the right option--> add, subtract, multiply, divide\n");
    }

    return 0;
}
