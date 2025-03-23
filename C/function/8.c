#include <stdio.h>

int get5Factorial();

int main()
{
    printf("5! = %d\n", get5Factorial());
    return 0;
}

int get5Factorial()
{
    int fact = 1;
    for (int i = 1; i <= 5; i++)
        fact *= i;

    return fact;
}
