#include <stdio.h>
int main()
{
    int arr[6] = {7, 1, 2, 9, 6, 4};

    int *ptr1 = &arr[1];
    int *ptr2 = &arr[4];

    printf("ptr2 - ptr1: %d\n", ptr2 - ptr1);
    printf("ptr1 - ptr2: %d\n", ptr1 - ptr2);

    return 0;
}
