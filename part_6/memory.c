#include <stdio.h>
#include <stdlib.h>

//this is to see memory errors using valgrind

int main(void)
{
    int *x = malloc(3 * sizeof(int)); //we want to allocate memory for 3 int
    x[1] = 72; //int has 4 bytes
    x[2] = 73;
    x[3] = 33;
}

//this code has bugs.....indexing is off....we didnt free the memory....we didnt check of x is null
//can be seen in the terminal when we type valgind ./memory