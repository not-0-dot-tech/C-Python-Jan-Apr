// 2D array with dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;

    scanf("%d%d", &row, &col);

    int **arr = malloc(row * sizeof(int *));
    // check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < row; i++)
    {
        arr[i] = malloc(col * sizeof(int));
        // check if memory allocation was successful
        if (arr[i] == NULL)
        {
            printf("Memory allocation failed\n");
            return 2;
        }
    }

    // input elements
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);

    // print elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // free memory

    for (int i = 0; i < row; i++)
        free(arr[i]);

    free(arr);

    return 0;
}
