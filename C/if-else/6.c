#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n = 5) // actually it should be n == 5
        printf("Yehhhhh!\n");
    else
        printf("Awwwwww!\n");

    return 0;
}
