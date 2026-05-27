#include <stdio.h>

int main(void)
{
    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

//by doing this.....in valgrind you can see that we have uninitialised size 8
//which is char *s....because it is empty or garbage value in it...if we didnt use the = sign
//it will just be a garbage value....the program uses 8 bytes of memory that were never initialised