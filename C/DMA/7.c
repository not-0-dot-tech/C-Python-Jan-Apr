#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(5 * sizeof(int));
    // check if malloc was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // set the values of arr
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;

    arr = malloc(5 * sizeof(int)); // results memory leak
    // check if malloc was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 2;
    }

    // set the values of arr
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;

    
    return 0;
}
