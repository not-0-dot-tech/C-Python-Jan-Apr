#include <stdio.h>
int main()
{
    int arr[5] = {7, 3, 4, 5, 6};
    int *ptr = arr;

    printf("%d\n", *ptr); // 7
    printf("%d\n", *arr); // 7

    printf("%d\n", *(ptr + 3)); // 5
    printf("%d\n", ptr[3]); // 5

    ptr++; // ptr = ptr + 1 or ptr += 1

    printf("%d\n", arr[2]); // 4
    printf("%d\n", ptr[2]); // 5

    return 0;
}
