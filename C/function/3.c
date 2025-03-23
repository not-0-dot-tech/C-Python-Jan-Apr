#include <stdio.h>

void printHello10Times(); // function prototype

int main()
{

    printf("Hi...\n");
    printf("Doing something...\n\n\n");

    printHello10Times();

    return 0;
}

void printHello10Times() // function definition
{
    // print Hello World 10 times
    for (int i = 1; i <= 10; i++)
        printf("Hello World - %d\n", i);

    return 5; // return statement with value

    printf("This line will not be executed\n"); // unreachable code
}
