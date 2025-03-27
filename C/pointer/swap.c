#include <stdio.h>

void swap(int *, int *);

int main()
{
    int x = 2, y = 3;
    printf("Before: x = %d, y = %d\n", x, y); // 2, 3
    swap(&x, &y);
    printf("After: x = %d, y = %d\n", x, y); // 3, 2
    return 0;
}

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}