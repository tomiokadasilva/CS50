#include <stdio.h>
#include <cs50.h>

#define n 3

bool valid_triangle(float sides[n]);
float get_side(void);

int main (void)
{
    float sides[n];

    for (int i = 0; i < n; i++)
    {
        sides[i] = get_side();
    }

    if (valid_triangle(sides))
    {
        printf("Is a valid triangle.\n");
    }
    else
    {
        printf("Is not a valid triangle.\n");
    }
}

float get_side(void)
{
    int x;
    do
    {
        x = get_float("Input real number:  ");
    } while (x < 0);

    return x;
}


bool valid_triangle(float sides[n])
{
    if (sides[0] + sides[1] > sides[2] || sides[0] + sides[2] > sides[1] || sides[1] + sides[2] > sides[0])
    {
        return true;
    }
    else
    {
        return false;
    }
}