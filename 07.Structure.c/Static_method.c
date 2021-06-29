// static Datatype Variable_name = Variable_value;

// #include <stdio.h>
// int myfunc()
// {
//     static int i = 0; // static means its value executes only one time
//     i++;
//     return i;
// }

// int main()
// {
//     printf("Value= %d", myfunc());
//     printf("\nValue= %d", myfunc());
//     printf("\nValue= %d", myfunc());
//     return 0;
// }

// this is the another example of call by value
// #include <stdio.h>
// int b = 34;       // global variable
// int func1(int b1) // formal parameter
// {
//     printf("The address of b inside func1 is %d\n", &b);
//     printf("The value of b inside func1 is %d\n", b);
//     return b * 10;
// }
// int main()
// {
//     int b = 10;
//     printf("The address of b inside main is %d\n", &b);
//     printf("The value of b in main function is %d\n", b);
//     int val = func1(b);
//     // int *ptr = &val;

//     printf("The value of func1 is %d\n", val);
//     return 0;
// }

#include <stdio.h>
int b = 34;
int func1(int b1)
{
    static int myvar = 0;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return b1 + myvar;
}
int main()
{
    int b = 344;
    int val = func1(b);
    printf("%d\n", val);
    val = func1(b);
    printf("%d\n", val);

    return 0;
}