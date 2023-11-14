#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year;
    int popinit;
    int popend;
    int population;

    // Prompt for start size
    do
    {
        popinit = get_int("Enter the population initial size:");
    }
    while (popinit <= 8);

    population = popinit;
    // Prompt for end size
    do
    {
        popend = get_int("Enter the population final size:");
    }
    while (popend < popinit);

    // TODO: Calculate number of years until we reach threshold
    for (year = 0; population < popend; year++)
    {
        population = population + (population / 3) - (population / 4);
    }

    // Print number of years
    printf("Population initial size: %i \n", popinit);
    printf("Population end size: %i \n", popend);
    printf("Years: %i \n", year);
}