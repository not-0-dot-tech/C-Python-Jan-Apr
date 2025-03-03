#include <stdio.h>
int main()
{
    // character array

    char chArray[6] = {'T', 'i', 'a', 'n'};

    // string
    printf("%s\n", chArray);

    printf("\n");

    if (chArray[4] == '\0' && chArray[5] == '\0')
        printf("End of string\n");
    else
        printf("Not end of string\n");

    return 0;
}
