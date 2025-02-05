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
        break;

    case 7:
        printf("Bye\n");
        break;

    default:
        printf("Sorry\n");

    case 2:
        printf("Hola\n");
        break;

    case 9:
        printf("Lol\n");
        break;

    case 6:
        printf("Yes\n");
        break;
    }

    return 0;
}
