// while vs do-while

#include <stdio.h>
int main()
{
    // while loop

    printf("while loop\n");

    int i = 5;

    while (i < 3) // false
    {
        printf("Hello World in while loop\n");
        i++;
    }

    printf("\n\n");

    // do-while loop

    printf("do-while loop\n");

    int j = 5;

    do
    {
        printf("Hello World in do-while loop\n");
        j++;
    } while (j < 3); // false

    return 0;
}
