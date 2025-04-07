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

    // print the values of arr
    printf("Values of arr: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // done with arr, free the memory
    free(arr);

    // if you want to avoid dangling pointer, set arr to NULL
    arr = NULL;
    
    return 0;
}
