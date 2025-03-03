#include <stdio.h>
int main()
{
    char str[100];

    //  Input sentence from user

    scanf("%[^\n]s", str);

    //  Output sentence

    printf("Sentence: %s\n", str);

    return 0;
}
