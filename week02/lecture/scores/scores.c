#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int sum = 0;
    int n;
    // Get a non-negative number of scores
    do
    {
        n = get_int("How many scores do you want to input?(1-9) ");
    } while (n <= 0);
    
    int scores[n];

    // Get scores
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Calculate Sum of scores
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    
    // Print Average of Scores
    printf("Average: %f\n", sum / (float) n);
    
}
