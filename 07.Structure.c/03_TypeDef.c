#include <stdio.h>
#include <string.h>
// typedef struct student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// } std; //new name.. now struct student is call as std
int main()
{ // {
    //     typedef int intizer;
    //     intizer a = 2, b = 4;
    //     printf("The value of intizer is %d\n", a);

    // std s1, s2;
    // s1.id = 23;
    // s2.id = 45;
    // printf("the id No. is %d\n", s1.id);
    // strcpy(s1.name, "Ashis");
    // printf("The name of a is %s\n", s1.name);

    // int *a, b; // this means that a is a pointer but b is an intizer
    // int c = 34;
    // a = &c; // as a in a pointer, so it can easily store the address of an intizer as a
    // b = &c; // this throws an error as b is not a pointer, b is an intizer
    // we can use here typedef function to  creat a and b both into a pointer

    typedef int *intpointer;
    intpointer a, b; //here a and b is now created as a pointer by *int typedef
    int c = 45;
    a = &c;
    b = &c;
    printf("the value of a is %d\n", *a);
    printf("the value of b is %d\n", *b);
    printf("the address of a is %p\n", a);
    printf("the address of b is %p\n", b);
    printf("the address of a in hexadecimal is %x\n", a);

    return 0;
}