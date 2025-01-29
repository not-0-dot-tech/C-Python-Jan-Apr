// nested if-else statement

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 50)
    {
        if (!(marks % 2))
            printf("You have passed the exam and your marks are even.\n");
        else
            printf("You have passed the exam and your marks are odd.\n");
    }
    else
    {
        if (!(marks % 2))
            printf("You have failed the exam and your marks are even.\n");
        else
            printf("You have failed the exam and your marks are odd.\n");
    }

    return 0;
}
