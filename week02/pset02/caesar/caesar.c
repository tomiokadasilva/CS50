#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipher(string t, int k);
bool onlydigits(string s);
char rotate(char t, int k);

int main(int argc, string argv[])
{
    // checks if provided key is composed by digits and if there are only one key
    if (argc != 2 || !onlydigits(argv[1]))
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }

    // converts argv[1] from string to int
    int key = atoi(argv[1]);

    // get user input
    string plaintext = get_string("plaintext:  ");

    cipher(plaintext, key);

    // output
    printf("ciphertext: %s\n", plaintext);

    return 0;
}

void cipher(string t, int k)
{
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        t[i] = rotate(t[i], k); // calls rotate for each character
    }
}

char rotate(char t, int k)
{
    if (isalpha(t)) // check if character is alphabetic
    {
        char base = isupper(t) ? 'A' : 'a'; // check if upper or lowercase
        
        t = t - base;     // transform from ASCII to alphabet
        t = (t + k) % 26; // Character + key wrapped over the alphabet positions
        t = t + base;     // transform back from alphabet to ASCII
    }
    else
    {
        return t;
    }
    return t;
}

bool onlydigits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isdigit(s[i]) == 0) // check if the key is only digits
        {
            return false;
        }       
    }
    return true;
}