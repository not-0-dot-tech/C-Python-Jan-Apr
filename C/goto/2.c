// goto statement in C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello\n");

    if (0) // always false condition
    {
    insideIf:
        printf("Inside if\n");
        exit(1); // exit the program
    }

    printf("I am going to use goto statement\n");

    goto insideIf;

    return 0;
}
