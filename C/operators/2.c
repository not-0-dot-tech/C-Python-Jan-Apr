#include <stdio.h>
int main()
{
    int x = 5;

    printf("%d\n", x++ + ++x + x + x++ + ++x + x);

    return 0;
}
