#include <stdio.h>

int main()
{
    float x = 5.67;

    printf("The value of x is %f\n", x);
    printf("The value of x is %.2f\n", x); // 2 digits after decimal
    printf("The value of x is %.3f\n", x); // 2 digits after decimal

    return 0;
}