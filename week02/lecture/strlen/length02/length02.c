#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Name: ");
    int length = strlen(s);
    printf("%i \n", length);

}