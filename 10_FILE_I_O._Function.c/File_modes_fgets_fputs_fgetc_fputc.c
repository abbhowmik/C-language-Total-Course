// use of fgetc function
// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL;
//     ptr = fopen("Myfile.txt", "r"); // here r refers the mode you wabt ti read
//     char c = fgetc(ptr);
//     printf("The first  character I read was %c\n", c);

//     c = fgetc(ptr);
//     printf("The  second character I read was %c\n", c);

//     fclose(ptr);
//     return 0;
// }

// use of fgets function
// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL;
//     ptr = fopen("Myfile.txt", "r");
//     char str[45];
//     fgets(str, 12, ptr);
//     printf("The string is **%s\n", str);
//     return 0;
// }

// use of fputc and fputs  function
// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL;
//     ptr = fopen("Myfile.txt", "w");
//     fputc('o', ptr);
//     fputs("\nThis is Ashis", ptr);

//     return 0;
// }

// use of r+ (mode) function
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("Myfile.txt", "r+"); // it adds the arguments in the strat of string
    fputc('o', ptr);
    fputs("\nThis is Ashis", ptr);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL;
//     ptr = fopen("Myfile.txt", "a+");
//     fputc('o', ptr);
//     fputs("\nThis is Mu mind kalmd", ptr);
//     return 0;
// }

//use of w+ (mode) function
// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL;
//     ptr = fopen("Myfile.txt", "w+"); // it add your argument in the strat of string
//     fputc('o', ptr);
//     fputs("\nThis i", ptr);
//     return 0;
// }
