#include <stdio.h>
#include <string.h>

int main()
{
    // Declare two strings
    char str1[100], str2[100];

    // Input two strings from user using gets()
    gets(str1);
    gets(str2);

    // concatenate str2 to str1 using strcat()
    printf("Concatenated string: %s\n", strcat(str1, str2));

    // after concatenation, str1 contains the concatenated string
    printf("Concatenated string in str1: %s\n", str1);
    printf("String in str2: %s\n", str2);
    return 0;
}
