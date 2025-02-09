#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            break; // loop will break when i = 5

        printf("%d ", i);
    }

    printf("\n");

    printf("%d\n", i); // 5

    return 0;
}
