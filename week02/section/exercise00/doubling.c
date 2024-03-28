#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <size>\n", argv[0]);
        return 1;
    }
    
    int size = atoi(argv[1]);
    int sequence[size];

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            sequence[0] = 1;
        }
        else
        {
            sequence[i] = sequence [i-1] * 2;
        }
        printf ("%i \n", sequence[i]);
    }
    
}