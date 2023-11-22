#include <cs50.h>
#include <stdio.h>

long card;

int main(void) 
{
    long get_creditcard();
    bool validate_card(long card);
}

long get_creditcard (void)
{
    do
    {
        card = get_long ("Number: ");
    } 
    
    while (card < 1);

    return card;
}

bool validate_card (long card)
{
    
    int digit;

    for (long i = 0; i < card; i++)
    {
        digit = card % 10;
        printf ("First Digit: %i", digit);
        card = card / 10;
        printf ("%li", card);
    }

    return 0;
}