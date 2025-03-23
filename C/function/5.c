#include <stdio.h>

void printHello(int); // prototype of the function
// here parameter name is optional

int main()
{
    int n;
    scanf("%d", &n);

    printHello(n);

    return 0;
}

void printHello(int n) // definition of the function
{
    for (int i = 1; i <= n; i++)
        printf("Hello World - %d\n", i);
}
