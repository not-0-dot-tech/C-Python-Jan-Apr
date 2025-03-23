#include <stdio.h>

// function prototype
int add(int, int);

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    // int ans = add(a, b); // function call

    // printf("%d\n", ans);

    printf("%d\n", add(a, b)); // function call

    return 0;
}

// function definition
int add(int a, int b)
{
    return a + b; // return statement
}
