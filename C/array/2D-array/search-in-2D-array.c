// search in 2D array

#include <stdio.h>
int main()
{
    int row, col;

    scanf("%d%d", &row, &col);

    int arr[row][col];

    // input

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);


    int key;

    scanf("%d", &key);

    // check if the key is present in the 2D array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                printf("1\n");
                return 1;
            }
        }
    }
    
    printf("0\n");

    return 0;
}
