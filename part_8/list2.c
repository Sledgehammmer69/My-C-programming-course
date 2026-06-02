#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
/*
    *list = 1;
    *(list + 1) = 2;                        // <-- this was the same as using arrays
    *(list + 2) = 3;
*/

    list[0] = 1;
    list[1] = 2;                            // <-- the same
    list[2] = 3;

    //list = malloc(4 * sizeof(int));     //This is bad because we overwrite the original pointer, The original 3-integer memory block becomes unreachable. Causing a memory leak
    //solution...we shall create a temp variable

    int *tmp = malloc(4 * sizeof(int)); 
    if (tmp == NULL)
    {
        free(list);     //usually this isnt necessary since when the program exits...it automatically frees the memory
        return 1;
    }

    //copy old list into new list
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    // free original list
    free(list);

    list = tmp;
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    
}