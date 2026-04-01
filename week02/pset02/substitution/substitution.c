#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int key_check(string key);
void encrypt(string k, string t);

int main(int argc, string argv[])
{
    if (argc != 2) // check for only 2 arguments
    {
        printf("Usage: %s KEY \n", argv[0]);
        return 1;
    }
    if (key_check(argv[1]) != 0) // check if key is valid
    {
        return 1;
    }

    string plaintext = get_string("Plaintext:  ");

    encrypt(argv[1], plaintext); // encrypt

    return 0;
}

void encrypt(string k, string t)
{
    for (int i = 0; t[i] != '\0'; i++) // loops through each letter of the string
    {
        
        if (isalpha(t[i])) // the letter is alphabetic?
        {
            int pos = toupper(t[i]) - 'A';
            t[i] = isupper(t[i]) ? toupper(k[pos]) : tolower(k[pos]);
        } 
    }
    printf("ciphertext: %s\n", t);
}

int key_check(string key)
{
    // check if key is 26 characters long
    if (strlen(key) != 26)
    {
        printf("KEY must contain 26 characters\n");
        return 1;
    }

    for (int i = 0; key[i] != '\0'; i++)
    {
        // check if key is alphabetical
        if (!isalpha(key[i]))
        {
            printf("All characters in KEY must be alphabetical\n");
            return 1;
        }
    }
    // check if key contains each alphabetical character once

    for (int i = 0; key[i] != '\0'; i++)
    {
        int counter = 0;
        for (int j = 0; key[j] != '\0'; j++)
        {
            if (('A' + i) == toupper(key[j]))
            {
                counter++;
            }
        }
        if (counter != 1)
        {
            printf("All characters in KEY must be represented only once. No duplicates or missing" 
                   "characters\n");
            return 1;
        }
    }
    return 0;
}