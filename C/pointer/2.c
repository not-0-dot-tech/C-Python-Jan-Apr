int main(void)
{
    int printf(const char *, ...);

    int x = 5;
    int *p1 = &x;
    int **p2 = &p1;
    
    printf("%d\n", x); // 5
    printf("%u\n", &x); // address of x
    printf("%u\n", p1); // address of x
    printf("%u\n", &p1); // address of p
    printf("%d\n", *p1); // 5

    printf("%u\n", p2); // address of p1
    printf("%u\n", &p2); // address of p2
    printf("%u\n", *p2); // address of x
    printf("%d\n", **p2); // 5

    **p2 = 10; // x = 10

    printf("%d\n", x); // 10

    return 0;
}
