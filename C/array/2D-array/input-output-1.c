#include <stdio.h>
int main()
{
    int arr[3][2];

    // input

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);

    // output

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }

    return 0;
}
