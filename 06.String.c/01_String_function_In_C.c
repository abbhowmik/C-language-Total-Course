// example of strcat --> it basically concatenate of (add) two string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "Hello";
//     char t[] = "World";
//     strcat(s, t);
//     printf("The new string is %s\n", s);
//     return 0;
// }

// use of strlen function
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int str_length;
//     char str[] = "Ashis";
//     str_length = strlen(str); // it measure the length of the string

//     printf("The length of the string is %d\n", str_length);
//     printf("The length of the string is %d", strlen(str)); // another method
//     return 0;
// }

// use of strcpy fuction
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "Harry";
//     char t[56];
//     printf("The target string is %s\n", s);
//     printf("Now we are going to copy in s string's content in t string\n");
//     printf("Now the copied string is %s", strcpy(t, s)); // this copied string

//     return 0;
// }

// use of strcmp function
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "ashis";
//     char t[] = "ashis";
//     int a;
//     a = strcmp(s, t); // it check the first element of each string alphabatically
//     printf("\n%d", a);
//     return 0;
// }

// use of strrev function(for reversion a string)
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "AshisBhowmik is a good boy and he was a very good man";
//     printf("The reversed form of the string is %s\n", strrev(s));
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char a[45];
    char b[33];
    printf("Enter first friends name\n");
    gets(a); // it takes input from the user
    printf("Enter second friends name\n");
    gets(b);
    printf("%s is the best friend of %s\n", a, b);

    return 0;
}