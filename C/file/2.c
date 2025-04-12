#include <stdio.h>

int main()
{
    FILE *fptr = fopen("src.txt", "r"); // open file in read mode

    if (fptr == NULL) // check if file opened successfully
    {
        printf("Error opening file!\n");
        return 1;
    }

    int a, b;

    fscanf(fptr, "%d%d", &a, &b); // read from file

    fclose(fptr); // close file
    printf("File read successfully.\n");

    // append the sum to the file
    fptr = fopen("src.txt", "a"); // open file in append mode

    if (fptr == NULL) // check if file opened successfully
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, " %d\n", a + b); // append to file

    fclose(fptr); // close file
    printf("File appended successfully.\n");

    return 0;
}
