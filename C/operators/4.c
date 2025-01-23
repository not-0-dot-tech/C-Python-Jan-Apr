#include <stdio.h>

int main()
{
    printf("%d\n", !(5 > 6)); // 1
    printf("%d\n", !6); // 0
    printf("%d\n", !!6); // 1
    printf("%d\n", 67 && 29); // 1
    printf("%d\n", 67 && (!-403)); // 0

    return 0;
}