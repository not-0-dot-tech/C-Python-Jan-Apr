// short hand if else using ternary operator

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // if (n > 5)
    //     printf("The number is greater than 5\n");
    // else
    //     printf("The number is less than or equal to 5\n");

    // short hand if else using ternary operator

    (n > 5) ? printf("The number is greater than 5\n") : printf("The number is less than or equal to 5\n");

    return 0;
}
