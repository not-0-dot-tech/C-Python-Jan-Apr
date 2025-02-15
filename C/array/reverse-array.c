#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    // input array

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // reverse array

    for (int i = 0; i < n / 2; i++)
    {
        // swapping
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // output array

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
