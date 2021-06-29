// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     void *pointerrr;
//     pointerrr = &a;
//     printf("%d", *pointerrr);
//     return 0;
//     // } // this throws error as the pointer is void

// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     void *pointer;
//     pointer = &a;
//     printf("%d", *(int *)pointer);
//     return 0;
// } // it does not throws an errror because we are take a typecasting value as int*

// #include <stdio.h>
// int main()
// {
//     int a = 56;
//     float b = 45;
//     void *ptr;
//     ptr = &a;
//     printf("The value of a is %d\n", *(int *)ptr);
//     ptr = &b;
//     printf("The value of b is %f\n", *(float *)ptr);
//     return 0;
// }