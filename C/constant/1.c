#include <stdio.h>
int main()
{
    int x = 10;

    x = 20;

    const int y = 10;

    y = 35; // Error: assignment of read-only variable 'y'   

    const float Pi = 3.14f;

    Pi = 5.16f; // Error: assignment of read-only variable 'Pi'

    return 0;
}
