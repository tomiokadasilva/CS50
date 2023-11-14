#include <stdio.h>
#include <cs50.h>

int main(void)
{
// Declaration of variables

  int n;
  int i;
  int j;

// Get size of the square  
  
  do {
  n = get_int("Size: \n");
  
  }
  while (n < 1);

// Render the square
  
  for (i = 0; i < n; i++) 
  {
    for (j = 0;j < n; j++)
    {
      printf ("#");
    }
    printf("\n");
  }
}
