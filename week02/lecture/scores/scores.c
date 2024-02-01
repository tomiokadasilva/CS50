#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);
int number(void);
void get_scores(int length, int array[]);

int main(void)
{  
    // Get a non-negative number of scores
    int n = number();

    // Get scores
    int scores[n];
    get_scores(n, scores);

    // Print Average of Scores
    printf("Average: %f\n", average (n, scores));
}

void get_scores(int length, int array[])
{   
    //Create array of size n
    for (int i = 0; i < length; i++)
    {
        array[i] = get_int("Score: ");
    }
}

int number(void)
{
    int n = 0;
    do
    {
        n = get_int("How many scores do you want to input?(1-9) ");
    } while (n <= 0);

    return n;
}


float average(int length, int array[]) 
{
        // Calculate Sum of scores
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += array[i];
        }

        return sum/ (float) length;
}
