// string copy

#include <stdio.h>
#include <string.h>

int main()
{
    // Declare two strings
    char source[100], target[100];

    // Input a string from user using gets()
    gets(source);

    // Copy source to target using strcpy()
    strcpy(target, source);

    // Output target using puts()
    puts(target);

    return 0;
}
