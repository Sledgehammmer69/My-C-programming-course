#include <stdio.h>
#include <stdlib.h>

//this is the correct version

int main(void)
{
    int *x = malloc(3 * sizeof(int)); //we want to allocate memory for 3 int
    if (x == NULL)
    {
        return 1;
    }

    x[0] = 72; //int has 4 bytes
    x[1] = 73;
    x[2] = 33;
    

    //we can use arrays....but since we're using pointer
    //we can use pointer arithmetic as well

/*
    *x = 72;
    *(x + 1) = 73;
    *(x + 2) = 33;
*/
    free(x);
    return 0;
}