// copy file content to another file using fgetc() and fputc()

#include <stdio.h>
int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("src.txt", "r");
    // check if source file opened successfully
    if (source == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen("dest.txt", "w");
    // check if destination file opened successfully
    if (destination == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(source);
        return 2;
    }

    // read from source file and write to destination file
    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    // close the files
    fclose(source);
    fclose(destination);
    printf("File copied successfully.\n");

    return 0;
}
