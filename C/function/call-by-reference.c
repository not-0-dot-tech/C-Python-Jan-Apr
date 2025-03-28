#include <stdio.h>

void change(int *);

int main()
{
    int x = 5;
    printf("Before: %d\n", x); // 5
    change(&x);
    printf("After: %d\n", x); // 10
    return 0;
}

void change(int *ptr)
{
    *ptr = 10;
}