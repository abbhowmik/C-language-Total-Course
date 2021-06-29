// ***Reading a file's content ***
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[34];
//     ptr = fopen("Myfile.txt", "r");
//     fscanf(ptr, "%s", string);
//     printf("Content is: %s\n", string);

//     return 0;
// }

//   ***Writing a file ***
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[54] = "This is myfile.txt";
//     ptr = fopen("Myfile.txt", "w");
//     fprintf(ptr, "%s", string);

//     return 0;
// }

// ***Appending content to a file ***
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[54] = "This is myfile.txt";
    ptr = fopen("Myfile.txt", "a");
    fprintf(ptr, "%s \n", string);

    return 0;
}