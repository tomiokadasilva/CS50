#include <stdio.h>
#include <cs50.h>


// Variables


int main(void)
{
  string name = get_string("What is your name? ");
  int age = get_int("What is your age? ");
  string phone = get_string("What is your phonenumber ");


  printf("Your name is: %s\n", name);
  printf("Your age is: %i\n", age);
  printf("Your phone is: %s\n", phone);
}
