#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string t);
int count_words(string t);
int count_sentences(string t);

int letter = 0;
int words = 0;
int sentences = 0;

int main (void)
{
    // prompt the user for input
    string text = get_string("Text: ");
    
    // count the numbers of letters, words and sentences in the text
    count_letters(text);
    count_words(text);
    count_sentences(text);

    // compute the coleman-liau index
    coleman_liau_index();

    // print the grade level
    print_grade();
}

int count_letters(string t)
{
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        if ((t[i] >= 65 && t[i] <= 90) || (t[i] >= 97 && t[i] <= 122))
        {
            letter++;
        }    
    }
    printf("Total number of letters: %i \n ", letter);
    return letter;
}

int count_words(string t)
{
  // TODO
  return 0;
}

int count_sentences(string t)
{
    // TODO
    return 0;
}


