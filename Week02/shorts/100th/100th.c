#include <stdio.h>
#include <cs50.h>

int main (void) {

    int list[100];

    for (int i = 0; i < sizeof(list) / sizeof(list[0]); i++)
    {
        list[i] = i;
        printf ("%d \n", list[i]);
    }
}
