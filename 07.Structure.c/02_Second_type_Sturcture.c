// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };

// int main()
// {
//     struct student a, b, c, d;
//     a.id = 1;
//     b.id = 2;
//     c.id = 3;
//     c.id = 4;
//     a.marks = 66;
//     b.marks = 78;
//     c.marks = 45;
//     d.marks = 88;
//     a.fav_char = 'p';
//     strcpy(a.name, "Ashis");
//     printf("a got %d marks in exam\n", a.marks);
//     printf("a's name is %s\n", a.name);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} a, b, c, d;

void print()
{
    printf("%s\n", a.name);
}
int main()
{
    a.id = 1;
    b.id = 2;
    c.id = 3;
    c.id = 4;
    a.marks = 66;
    b.marks = 78;
    c.marks = 45;
    d.marks = 88;
    a.fav_char = 'p';
    strcpy(a.name, "Ashis");
    printf("a got %d marks in exam\n", a.marks);
    printf("a's name is %s\n", a.name);
    print();

    return 0;
}