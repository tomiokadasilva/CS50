#include <stdio.h>
#include <cs50.h>


// Variables


int main(void)
{
  string name = get_string("What is your name? ");
  int age = get_int("What is your age? ");
  string phone = get_string("What is your phonenumber ");


  printf("Your name is: %s\n Your age is: %i \n Your phone is: %s \n", name, age, phone);
}
  
