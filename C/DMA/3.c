#include <stdio.h>
#include <stdlib.h>

int *getArray()
{
    int *arr = malloc(5 * sizeof (int));

    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;

    return arr;
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int *arr = getArray();
    
    display(arr, 5);

    return 0;
}