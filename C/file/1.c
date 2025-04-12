// write "Hello World!" to file
#include <stdio.h>
int main()
{
    FILE *fptr = fopen("hello.txt", "w"); // open file in write mode

    if (fptr == NULL) // check if file opened successfully
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Hello World!\n"); // write to file
    fclose(fptr); // close file
    printf("File written successfully.\n");

    return 0;
}
