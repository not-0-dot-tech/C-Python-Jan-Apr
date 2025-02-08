#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int i = 1; // counter variable

    int sum = 0;

    while (i <= n)
        sum += i++;

    printf("%d\n", sum);

    return 0;
}
