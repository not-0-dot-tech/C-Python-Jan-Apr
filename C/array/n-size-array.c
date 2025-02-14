#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    // input using loop

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // output using loop

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
