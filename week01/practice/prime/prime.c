#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    } 
    while (min >= max);
    
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // Checar se o numero recebido é primo
    // número é primo se for divisivel apenas por 1 e ele mesmo

    for (int i = 1; i < number; i++)
    {
        int remain = number % i;

        if (remain != 0)
        {
            i++;
        }
        else 
        {
            return number;
        }
    }
    
    
    
    
    
    // TODO
    return true;
}
