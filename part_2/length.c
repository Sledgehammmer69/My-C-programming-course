#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");
    
    //this is what strlen looks manually
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);

    int n1 = strlen(name);
    printf("%i\n", n1);
}