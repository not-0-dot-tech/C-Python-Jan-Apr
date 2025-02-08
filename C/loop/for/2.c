// for loop

#include <stdio.h>
int main()
{
    // print "Hello World" 5 times

    // int i;

    for (int i = 1; i <= 5; i++)
    {
        printf("Hello World\n");
    }

    printf("End of the loop\n");

    printf("i = %d\n", i); // error: 'i' undeclared (first use in this function)

    return 0;
}
