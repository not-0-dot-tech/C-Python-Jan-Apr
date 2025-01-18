#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;

    // input

    scanf("%2d", &x); // 1234 -> 12
    fflush(stdin);    // clear memory buffer
    scanf("%2d", &y);

    // output

    printf("%d %d\n", x, y);

    return 0;
}
