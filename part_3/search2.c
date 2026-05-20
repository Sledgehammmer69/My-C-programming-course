#include <cs50.h>
#include <stdio.h>
#include <string.h> //for comparinf strings....this needs to be used

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "to hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0) // then use strcmp to compare strings
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}