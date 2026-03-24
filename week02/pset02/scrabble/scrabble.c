#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

const int N = 2;
string WORDS[N];
int scores[N];
const int POINTS[26] = {
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
    5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
    1, 4, 4, 8, 4, 10
}; //array that associates each position of the array with each respective letter of the alphabet

void get_words();
void word_score(int x, string w[], int s[]);
void print_winner(int s[]);

int main(void)
{    
    get_words();
    word_score(N, WORDS, scores);
    print_winner(scores);
}

// Input players for each words
void get_words()
{
    for (int i = 0; i < N; i++)
    {
        WORDS[i] = get_string("Player %i: ", i + 1);
    }
}

// Calculate each word score
void word_score(int x, string w[], int s[])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0, n = strlen(w[i]); j < n; j++)
        {
            char c = toupper(w[i][j]);
            if (c >= 'A' && c <= 'Z')
                s[i] += POINTS[c - 'A'];
        }
    }
}

void print_winner(int s[])
{
    if (s[0] == s[1])
    {
        printf("Tie!\n");
    }
    else
    {
        int player = (s[0] > s[1]) ? 1 : 2; //inline if/else
        printf("Player %i wins!\n", player);
    }
}
    