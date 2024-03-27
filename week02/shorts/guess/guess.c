#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess (int n, int random_number);
int difficulty();

int main (void)
{
    srand(time(NULL));

    int random_number = rand() % 100 + 1;

    guess(difficulty(), random_number);
    return 0;
}


int difficulty()
{
    int n;
    int difficulty = get_int("Chose difficulty \n 1 - Easy (7 Guesses)\n 2 - Medium (6 Guesses)\n 3 - Hard (5 Guesses)\n Type: ");

    switch (difficulty)
    {
    case 1:
        n = 7;
        break;
    case 2:
        n = 6;
        break;
    case 3:
        n = 5;
        break;
    
    default:
        printf("Invalid difficulty. Defaulting to Easy.\n");
        n = 7; // Default to Easy
        break;
    }

    return n;
}

void guess (int n, int random_number)
{
    int guess;

    for (int i = 0; i < n; i++)
    {
        guess = get_int("Guess the number: ");

        if (guess == random_number)
        {
            printf("You guessed it! \n");
            break;
        }
        else if (guess > random_number)
        {
            printf("Lower! \n");
        }
        else
        {
            printf("Higher! \n");
        }
    }

    if (guess != random_number)
    {
        printf("You failed to guess! The random number was %i \n", random_number);
    }
}

