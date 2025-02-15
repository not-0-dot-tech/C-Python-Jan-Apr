#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    
    scanf("%d", &n);

    int arr[n];

    // input array

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // find min and max value

    int minValue = INT_MAX, maxValue = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minValue)
            minValue = arr[i];

        if (arr[i] > maxValue)
            maxValue = arr[i];
    }

    printf("Min value: %d\n", minValue);
    printf("Max value: %d\n", maxValue);

    return 0;
}
