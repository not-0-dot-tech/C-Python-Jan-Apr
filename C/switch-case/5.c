// simulating logical OR using switch case

#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    switch (input)
    {
    case 4:
    case 3:
    case 5:
        printf("True\n");
        break;

    default:
        printf("False\n");
    }

    return 0;
}
