#include <stdio.h>

// Function to calculate factorial of a number using recursion
int factorial(int n)
{
    // base case
    if (n <= 2)
        return n;

    return n * factorial(n - 1); // recursive call
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", factorial(n));

    return 0;
}
