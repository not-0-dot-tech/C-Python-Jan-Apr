#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    switch (input)
    {
    case 4:
        printf("Hi\n");
        break;

    case 3:
        printf("Hello\n");

    case 7:
        printf("Bye\n");

    case 2:
        printf("Hola\n");

    case 9:
        printf("Lol\n");

    case 6:
        printf("Yes\n");

    default:
        printf("Sorry\n");
    }

    return 0;
}
