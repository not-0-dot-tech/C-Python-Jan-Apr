#include <stdio.h>
int main()
{
    int arr[5] = {7, 3, 4, 5, 6};
    int *ptr = arr;

    ptr++; // ptr = ptr + 1 or ptr += 1
    arr++; // error: lvalue required as increment operand

    return 0;
}
