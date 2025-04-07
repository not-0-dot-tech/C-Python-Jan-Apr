#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr1 = malloc(5 * sizeof(int));
    // check if malloc was successful
    if (arr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // print the values of arr1
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    int *arr2 = calloc(5, sizeof(int));
    // check if calloc was successful
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        return 2;
    }

    // print the values of arr2
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
