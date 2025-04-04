#include <stdio.h>

typedef union Test
{
    int a; // 4 bytes
    char b; // 1 byte
    float c; // 4 bytes
} Test;

int main()
{
    printf("In this system\nint takes %d bytes\n", sizeof(int));
    printf("char takes %d bytes\n", sizeof(char));
    printf("float takes %d bytes\n\n\n", sizeof(float));

    printf("Hypothetically, the size of Test should be %d bytes\n", sizeof(int) + sizeof(char) + sizeof(float));
    printf("But the size of Test is actually %d bytes\n", sizeof(Test));

    return 0;
}
