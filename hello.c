#include <cs50.h> // Include the cs50 library for get_string function
#include <stdio.h>

int main(void)
{
    string answer = get_string("What is your name: ");
    printf("hello, %s\n", answer);
}