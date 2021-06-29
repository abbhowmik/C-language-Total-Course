#include <stdio.h>
#include <string.h>
// First type structure
struct book
{
    char title[44];
    char author_Name[34];
    float price;
    int pages;
};

int main()
{
    struct book b1 = {"Python_Programming", "Ashis", 220.00, 550};
    struct book b2 = {"Java_Programming", "Arjun", 2.0, 560};
    printf("The title of the book is %s\n", b1.title);
    printf("The title of the book is %s\n", b2.title);
    printf("The Name of the author of the book is %s\n", b1.author_Name);
    printf("The price of the book is %0.2f\n", b1.price);
    printf("The page in the book is %d\n", b1.pages);

    return 0;
}