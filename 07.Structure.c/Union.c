#include <stdio.h>
#include <string.h>

union student // as same as structure , just here union student have to write
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} a, b, c, d;

int main()
{
    a.id = 1;
    a.marks = 66;
    a.fav_char = 'p';
    strcpy(a.name, "Ashis"); // this value is execute in union as it is the last call

    printf("a's id No. is %d\n", a.id);                    // this is not successfully executed in union
    printf("a got %d marks in exam\n", a.marks);           // this is not successfully executed in union
    printf("a's name is %s\n", a.name);                    // only last(this) argument executed successfully in union
    printf("a's favourite character is %c\n", a.fav_char); // this is not successfully executed in union
    return 0;                                              // if we put any argument at last, this argument is executed successfully in union
}
