// ans false
// it  refers the second element of the array
// here is the proff
#include <stdio.h>
int main()
{
    int s[3] = {1, 9, 3};
    // int *S = s;
    // printf("The first element of the array is %d\n", *(S));
    // printf("The second  element of the array is %d\n", *(S + 1));
    printf("The third  element of the array is %d\n", *(s + 2));

    return 0;
}