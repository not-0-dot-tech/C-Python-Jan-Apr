#include <stdio.h>
#include <string.h>
int main()
{
    // Declare a string
    char str[100];

    // Input string from user using gets()
    gets(str);

    // int len = strlen(str);
    // printf("Length of string is %d\n", len);

    int length = strlen(str);
    printf("Length of string is %d\n", length);

    if (str[length] == '\0')
        printf("The string is null-terminated\n");
    else
        printf("The string is not null-terminated\n");

    return 0;
}
