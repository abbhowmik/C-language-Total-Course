// Guess the number game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, guessnum = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generating random number between 1 to 100
    // printf("The selected number is %d\n", number);

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (number > guess)
        {
            printf("Higher Number Please!\n");
        }
        else if (number < guess)
        {
            printf("Lower Number Please!\n");
        }
        else
        {
            printf("You guessed it right in %d attempt\n", guessnum);
        }
        guessnum++;

    } while (number != guess);

    return 0;
}