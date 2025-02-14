#include <stdio.h>

int main()
{
    int arr[5];

    // input using loop

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    // output using loop

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
