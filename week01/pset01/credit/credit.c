#include <cs50.h>
#include <stdio.h>

long get_creditcard (void);
bool validate_card (long);

int main(void) 
{
    long get_creditcard(void);
    bool validate_card(card);
}

long get_creditcard (void)
{
    long card;

    do
    {
        card = get_long ("Number: ");
    } 
    
    while (card < 1);

    return card;
}

bool validate_card (long card)
{
    int digit = card % 10 ;
}