#include <stdio.h>
int main()
{
    FILE *fptr = fopen("src.txt", "r");

    // check if file opened successfully
    if (fptr == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    // read and print the contents of the file char by char
    char ch = fgetc(fptr);

    while (ch != EOF) // EOF denotes end of file
    {
        // print the character
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    printf("\n");

    // close the file
    fclose(fptr);
    
    return 0;
}
