// string compare

#include <stdio.h>
#include <string.h>

int main()
{
    // Declare two strings
    char str1[100], str2[100];

    // Input two strings from user using gets()
    gets(str1);
    gets(str2);

    // compare str1 and str2 using strcmp()
    printf("Comparison result: %d\n", strcmp(str1, str2));

    return 0;
}
