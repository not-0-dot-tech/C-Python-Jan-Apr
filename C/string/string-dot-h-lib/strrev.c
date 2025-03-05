#include <stdio.h>
#include <string.h>

int main()
{
    // Declare a string
    char str[100];

    // Input string from user using gets()
    gets(str);

    // reverse the string using strrev()
    printf("Reverse of the string: %s\n", strrev(str));

    // strrev() actually reverses the string in place
    // so the original string is also reversed
    printf("Original string at this point: %s\n", str);

    return 0;
}
