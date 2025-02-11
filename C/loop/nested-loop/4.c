/*

    *
   **
  ***
 ****
*****

Take the number of rows as input from the user.

*/

#include <stdio.h>

int main()
{
    int row;

    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++) // space
            printf("  ");

        for (int j = 1; j <= i; j++) // star
            printf("* ");

        printf("\n");
    }

    return 0;
}
