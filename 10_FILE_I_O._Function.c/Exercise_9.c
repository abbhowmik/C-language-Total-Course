
// // this code is just for practice , it is also the another way to solve the palindromic number checked
// #include <stdio.h>
// #include <string.h>

// void isPalindrome(char num[], int n)
// {
//     for (int i = 0; i < (n / 2); i++)
//     {
//         if (num[i] == num[n - i - 1])
//         {
//             printf("The entered number is a palindromic number\n");
//             return;
//         }
//     }
//     printf("The entered number is  not a palindromic number\n");
// }

// int main()
// {
//     int length;
//     char number[56];
//     printf("Enter the length of your given number plate\n");
//     scanf("%d", &length);
//     printf("Enter your number: ");
//     scanf("%s", &number);
//     if (length != strlen(number))
//     {
//         printf("wrong number length, your number plate should contain %d number\n", length);
//         printf("Quitting the programme\n");
//         goto end;
//     }
//     else
//     {
//         printf("Thanks for entering right length of number plate\n");
//     }
//     printf("The result is::\n");
//     isPalindrome(number, length);

// end:
//     return 0;
// }

// this is the right way

// #include <stdio.h>
// #include <stdlib.h>

// int isPalindrom(int num)
// {
//     int rev = 0;
//     int originalNumber = num;
//     while (num != 0)
//     {
//         rev = rev * 10 + num % 10;
//         num = num / 10;
//     }
//     printf("The reversed form of your number is %d\n", rev);
//     if (originalNumber == rev)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int number;
//     printf("Enter the number to check whether it is a palindromic number or not\n");
//     scanf("%d", &number);
//     if (isPalindrom(number))
//     {
//         printf("This number is a palindromic number\n");
//     }
//     else
//     {
//         printf("This number is not a palindromic number\n");
//     }

//     return 0;
// }

// palindrom of a string
#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    if (str[l] == str[h])
    {
        printf("%s is a palindromic string\n", str);
        l++;
        h--;
        return;
    }
    printf("%s is not a palindromic string\n", str);
}
int main()
{
    // isPalindrome("abcba");
    isPalindrome("abccba");

    return 0;
}
