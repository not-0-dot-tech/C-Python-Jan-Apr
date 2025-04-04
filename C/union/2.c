#include <stdio.h>

typedef union Test
{
    int a; // 4 bytes
    char b; // 1 byte
    float c; // 4 bytes
} Test;

int main()
{
    Test t;

    t.a = 10;
    t.b = 'A';
    t.c = 3.14;

    printf("The integer value is: %d\n", t.a);
    printf("The character value is: %c\n", t.b);
    printf("The float value is: %.2f\n", t.c);

    return 0;
}
