// goto statement in C

#include <stdio.h>

int main()
{
    printf("Hello\n");

    if (0) // always false condition
    {
    insideIf:
        printf("Inside if\n");
    }

    printf("I am going to use goto statement\n");

    goto insideIf;

    return 0;
}
