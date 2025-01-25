#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); // input

    if (n) // if (n != 0)
        printf("The number is non-zero.\n");
    else
        printf("The number is zero.\n");

    return 0;
}

