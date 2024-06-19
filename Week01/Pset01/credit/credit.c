#include <cs50.h>
#include <stdio.h>

long get_creditcard(void);
int validate_card(long);
int sum(long card);
int product(long card);
int check_brand(long card);

int main(void) 
{
    long card_number = get_creditcard();
    int checksum = validate_card(card_number);

    return 0;
}

int validate_card(long card)
{   
    int checksum;
    checksum = product(card) + sum(card);
    if ((checksum % 10) != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        check_brand(card);
    }
    
    return checksum;
}

int check_brand(long card)
{

    // Check the length of the card number
    int length = 0;
    long temp_card = card;
    while (temp_card > 0)
    {
        temp_card /= 10;
        length++;
    }

    // Check the conditions for American Express, MasterCard, and Visa
    if ((length == 15) && ((card / 10000000000000 == 34) || (card / 10000000000000 == 37)))
    {   
        printf("AMEX\n");
        return 1; // American Express
    }
    else if ((length == 16) && ((card / 100000000000000 == 51) || (card / 100000000000000 == 52) ||
                                (card / 100000000000000 == 53) || (card / 100000000000000 == 54) || (card / 100000000000000 == 55)))
    {   
        printf("MASTERCARD\n");
        return 2; // MasterCard
    }
    else if ((length == 13 || length == 16) && (card / 1000000000000 == 4 || card / 1000000000000000 == 4))
    {
        printf("VISA\n");
        return 3; // Visa
    }
    else {
        printf("INVALID\n");
    }

    return 0; // Not recognized
}

int sum(long card)
{
    int digit;
    int sum = 0;
    /*Add each other digit starting from the first one*/
    for (int i = 0; i < 8; i++)
    {
        digit = card % 10;
        sum += digit;
        card /= 100;
    }

    return sum;
}

int product(long card)
{
    int digit;
    int productSum = 0;
    int product;
    card /= 10; /*Skips the first digit as we want to select each other digit starting with the number’s second-to-last digit*/

    /* Multiplies every other digit by 2 and if the product is greater than 9, it adds individual digits*/
    for (int i = 0; i < 8; i++)
    {
        digit = card % 10;
        product = digit * 2;

        if (product > 9)
        {
            productSum += (product % 10) + 1;
        }
        else 
        {
            productSum += product;
        }        
        card /= 100;
    }
    return productSum;
}

long get_creditcard(void)
{
    long card;

    do
    {
        card = get_long("Number: ");
    } 
    while (card < 1);

    return card;
}