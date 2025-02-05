#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 9:
    case 10:
        printf("Grade A\n");
        break;

    case 8:
        printf("Grade B\n");
        break;

    case 7:
        printf("Grade C\n");
        break;

    default:
        printf("Fail\n");
    }

    return 0;
}
