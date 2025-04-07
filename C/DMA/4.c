#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(5 * sizeof(int));
    
    // check if malloc was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    return 0;
}
