#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_square(int size);

// Main function

 int main(void)
 {

  // Get Size of Square
  int n = get_size();
  // Print the Square
  print_square(n);
 }


// Functions

int get_size(void) 
{
  int n;
  do
  {
   n = get_int("Size: ");
  }
  while (n < 1);
  return n;
}

void print_square(int size) 
{
  for (int i = 0; i < size;i++) 
  {
    for (int j = 0; j < size; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
