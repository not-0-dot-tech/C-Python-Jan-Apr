#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (!n)
        printf("The number is zero.\n");
    else
        printf("The number is non-zero.\n");
    return 0;
}
