#include <cs50.h>
#include <stdio.h>

/*int main (void)
{
    string ans = get_string("What's your name: ");
    printf("hello, %s\n", ans);
}
    */

/*int main(int argc, string argv[])
{
    printf("hello, %s\n", argv[1]);
}
    */

    int main(int argc, string argv[])
    {
        if (argc == 2)
        {
            printf("hello, %s\n", argv[1]);
        }
        else
        {
            printf("hello, world\n");
        }
    }