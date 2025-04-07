#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);

    int *arr1 = malloc(size * sizeof(int));
    // check if malloc was successful
    if (arr1 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // set the values of arr1
    for (int i = 0; i < size; i++)
        arr1[i] = i + 1;

    // print the values of arr1
    printf("Values of arr1: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    printf("Enter the new size of the array: ");
    int new_size;
    scanf("%d", &new_size);

    // reallocate memory for arr1
    int *arr2 = realloc(arr1, new_size * sizeof(int));

    // check if realloc was successful
    if (arr2 == NULL)
    {
        printf("Memory reallocation failed\n");
        return 2;
    }

    if (arr1 == arr2)
        printf("Memory reallocation was successful, arr1 and arr2 point to the same memory\n");
    else
        printf("Memory reallocation was successful, arr1 and arr2 point to different memory\n");

    return 0;
}