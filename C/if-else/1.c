#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); // input

    if (n > 5) // condition check
    {
        printf("Number is greater than 5\n");
        printf("Yehhhhh!\n");
    }
    else // if condition is false
    {
        printf("Number is less than or equal to 5\n");
        printf("Awwww!\n");
    }

    return 0;
}