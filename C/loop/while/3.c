// 1, 2, 3, 4, ...... n

#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int i = 1; // counter variable

    while (i <= n)
        printf("%d ", i++);

    printf("\n");

    return 0;
}
