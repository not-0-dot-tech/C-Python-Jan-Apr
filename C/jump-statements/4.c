#include <stdio.h>
int main()
{
    int i = 1;

    while (i <= 10)
    {

        if (i == 5)
        {
            i++;
            continue;
        }

        printf("%d ", i++);
    }

    printf("\n");

    return 0;
}
