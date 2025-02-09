/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Take the row input from the user and print the above pattern.

*/

#include <stdio.h>

int main()
{
    int row;

    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
