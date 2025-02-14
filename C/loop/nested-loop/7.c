#include <stdio.h>
int main()
{
    int stars;

    scanf("%d", &stars);

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= stars; j++)
        {
            if (!((i + j) % 4) || ((i == 2) && !(j % 2)))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
