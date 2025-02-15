#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    // input array

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // find min and max value

    int minvalue = arr[0], maxvalue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minvalue)
            minvalue = arr[i];
        
        if (arr[i] > maxvalue)
            maxvalue = arr[i];
    }

    printf("Min value: %d\n", minvalue);
    printf("Max value: %d\n", maxvalue);
    return 0;
}
