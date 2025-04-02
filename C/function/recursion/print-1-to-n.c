#include <stdio.h>

void printNto1(int n)
{
    // base case
    if (n < 1)
        return;

    printNto1(n - 1); // recursive call
    printf("%d ", n); // print n
}

int main()
{
    int n;
    scanf("%d", &n);

    printNto1(n); // call the function to print from n to 1
    printf("\n");

    return 0;
}
