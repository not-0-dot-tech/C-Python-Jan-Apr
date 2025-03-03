#include <stdio.h>
int main()
{
    char str[10] = "Hello";
    printf("%s\n", str);

    printf("\n");

    if (str[6] == '\0')
        printf("End of string\n");
    else
        printf("Not end of string\n");

    return 0;
}
