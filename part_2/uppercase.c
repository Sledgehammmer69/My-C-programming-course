#include <cs50.h>
#include <ctype.h>  //or we can use the ctype library
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));        //apparently the toupper function is smart enough to change it for you...so no need if statement
    }
    printf("\n");
}