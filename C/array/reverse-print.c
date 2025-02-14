#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    // input using loop

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // reverse output using loop

    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
