// rock, paper and scissors game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int greater(char a, char b)
{
    if (a == b)
    {
        return 0;
    }
    if ((a == 'r') && (b == 'p'))
    {
        return -1;
    }
    else if ((a == 'r') && (b == 's'))
    {
        return 1;
    }
    else if ((a == 'p') && (b == 's'))
    {
        return 1;
    }
    else if ((a == 'p') && (b == 'r'))
    {
        return -1;
    }
    else if ((a == 's') && (b == 'p'))
    {
        return -1;
    }
    else if ((a == 's') && (b == 'r'))
    {
        return 1;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    srand(time(NULL));
    printf("\nWelcome to Rock, Paper, Scissors: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("Player's Turn : \n");
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You select %c\n", playerchar);

        printf("Comp's Turn:\n");
        temp = (rand() % 3 + 1);
        compchar = dict[temp - 1];
        printf("Computer select %c\n", compchar);
    }

    if (greater(playerchar, compchar) == 1)
    {

        playerScore += 1;
    }
    else if (greater(playerchar, compchar) == -1)
    {
        compScore += 1;
    }
    else
    {
        playerScore += 1;
        compScore += 1;
    }
    printf("Your's Score = %d, Com's Socre = %d\n", playerScore, compScore);
    if (playerScore > compScore)
    {
        printf("**Congratulation**, You win the game\n");
    }
    else if (playerScore == compScore)
    {
        printf("The game is a Tie!, Play again to win\n");
    }
    else
    {
        printf("OHH!, You Loose the game");
    }
    // printf("Random No. = %d", rand() % 3);

    return 0;
}