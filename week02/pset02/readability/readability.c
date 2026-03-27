#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define N 3

void evaluate_text(string t, int p[]);
float coleman_liau_index(int p[]);
void print_grade(float i);

int main(void)
{
    int properties[N] = {0, 0, 0}; // initialize array with letters, words and sentences
                                   // respectively

    // prompt the user for input
    string text = get_string("Text: ");
    
    // count the numbers of letters, words and sentences in the text
    evaluate_text(text, properties);

    // compute the coleman-liau index
    float clindex = coleman_liau_index(properties);

    // print the grade level
    print_grade(clindex);
}

void evaluate_text(string t, int p[])
{
    if (isalpha(t[0])) // count for first letter of a word in a sentence
    {
        p[1]++;
    }
    
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        if (isalpha(t[i])) // isalpha is a function from the ctype library that verifies if
                           // a character is from the alphabet.you could compare if the character is 
                           // between the intervals a-z || A-Z in the ASCII table as well.
        {
            p[0]++;
        }
        
        if (t[i] == 32) // count for each space in a sentence
        {
            p[1]++;
        }

        if (t[i] == '!' || t[i] == '?' || t[i] == '.') // count for sentence terminations
        {
            p[2]++;
        }
    }
}

float coleman_liau_index(int p[])
{
    float clindex = 0.0;
    float L = ((float) p[0] / (float) p[1]) * 100; // cast to float
    float S = ((float) p[2] / (float) p[1]) * 100; //
    clindex = 0.0588 * L - 0.296 * S - 15.8;
    return clindex;
}

void print_grade(float i)
{
    i = round(i);
    
    if (i < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (i > 16)
    {
        printf("Grade 16+\n");
    }
    else if (i >= 1 && i <= 16)
    {
        printf("Grade %i\n", (int) i);
    }
    else
    {
        printf("index is: %f\n", i);
    }
}