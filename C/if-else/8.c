// else if

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 5)
        printf("The number is greater than 5\n");
    else if (n < 5) // optional
        printf("The number is less than 5\n");
    else if (n == 5) // optional
        printf("The number is equal to 5\n");

    return 0;
}
