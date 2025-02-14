#include <stdio.h>
int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    int arr[n];

    // input using loop

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // sum of even numbers using loop

    for (int i = 0; i < n; i++)
        if (!(arr[i] % 2))
            sum += arr[i];

    printf("%d\n", sum);

    return 0;
}
