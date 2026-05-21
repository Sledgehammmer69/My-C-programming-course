#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct  //data structure
{
    string name;
    string number;
} person;


int main(void)
{
    person people[3];

    people[0].name = "Kelly";
    people[0].number = "0123336598";

    people[1].name = "David";
    people[1].number = "0114558745";

    people[2].name = "John";
    people[2].number = "0225874698";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}