#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}


//this will pass by value....meaning a and b are just copies of x and y....yes they have swapped but just a and b....not x and y


/*void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
*/

//to swap x and y....we can use pass by reference

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
