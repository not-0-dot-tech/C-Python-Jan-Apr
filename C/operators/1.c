#include <stdio.h>
int main()
{
    int x = 5;

    x++;

    ++x;

    printf("x = %d\n", x++);

    printf("x = %d\n", ++x);

    printf("x = %d\n", x);

    printf("x = %d\n", x++);

    printf("x = %d\n", x);

    return 0;
}
