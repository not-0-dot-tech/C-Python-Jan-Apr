#include <stdio.h>
int main()
{
    int x, y;

    // input

    scanf("%2d", &x); // 1234 -> 12
    scanf("%2d", &y); // 34

    // output

    printf("%d %d\n", x, y); // 12 34

    return 0;
}
