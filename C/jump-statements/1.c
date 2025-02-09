#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            break; // loop will break when i = 5

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
