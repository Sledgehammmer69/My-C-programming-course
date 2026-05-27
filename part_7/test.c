#include <stdio.h>

int main(void)
{
    int x = 5;
    int *t = &x;
    printf("Pointer t is: %p\n", t);
    printf("The address of t is: %p\n", &t);
    printf("X is: %i\n", x);
    printf("The address of X is: %p\n", &x);
    printf("The value of t is: %i\n", *t);
}
