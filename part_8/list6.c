#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        //allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n -> number = get_int("Number: ");
        n -> next = NULL;

        //if list is empty
        if (list == NULL)
        {
            list = n;
        }

        //if number belongs at begining of the list
        else if (n -> number < list -> number)
        {
            n -> next = list;
            list = n;
        }
        //if number belongs later in the list
        else
        {
            //iterate over all the nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr -> next)
            {
                //if end of list
                if (ptr -> next == NULL)
                {
                    //append node
                    ptr -> next = n;
                    break;
                }

                //if in the middle of the list
                if (n -> number < ptr -> next -> number)
                {
                    n -> next = ptr -> next;
                    ptr -> next = n;
                    break;
                }
            }
        }
        
    }

    //print the numbers
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr -> number);
        ptr = ptr -> next;
    }

    //reset ptr before freeing
    ptr = list;
    //free memory
    while (ptr != NULL)
    {
        node *next = ptr -> next;
        free(ptr);
        ptr = next;
    }

    return 0;
}