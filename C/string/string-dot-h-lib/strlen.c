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

    printf("Length of string is %d\n", strlen(str));

    return 0;
}
