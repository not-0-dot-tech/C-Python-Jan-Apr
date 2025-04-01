#include <stdio.h>

void printArray(int[], int); // function prototype

int main()
{
    int arr[5] = {9, 0, 5, 1, 3};

    printArray(arr, 5); // function call by reference

    return 0;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]); // print("%d ", *(arr + i));

    printf("\n");
}
