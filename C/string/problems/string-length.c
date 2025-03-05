// calculate the length of a string without using strlen() function

#include <stdio.h>
int main()
{
    // declare a string
    char str[100];

    // read a string from user
    gets(str);

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
        length++;

    printf("Length of the string: %d\n", length);

    return 0;
}
