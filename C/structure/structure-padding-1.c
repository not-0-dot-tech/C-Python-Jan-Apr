#include <stdio.h>

typedef struct Test
{
    char a; // 1 byte
    int b;  // 4 bytes
    char c; // 1 byte
} Test;

int main()
{
    printf("In this system\nint takes %d bytes\n", sizeof(int));
    printf("char takes %d bytes\n\n\n", sizeof(char));

    printf("Hypothetically, the size of Test should be %d bytes\n", sizeof(char) + sizeof(int) + sizeof(char));
    printf("But the size of Test is actually %d bytes\n", sizeof(Test));

    return 0;
}
