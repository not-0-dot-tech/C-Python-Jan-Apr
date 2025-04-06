#include <stdio.h>
#include <stdlib.h>

int *getAddress()
{
    int *p = malloc(sizeof (int));
    *p = 5;
    return p;
}

int main()
{
    int *ptr = getAddress();
    printf("%d\n", *ptr);
    return 0;
}