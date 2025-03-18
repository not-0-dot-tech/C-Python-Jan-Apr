int main(void)
{
    int printf(const char *, ...);

    int x = 5;
    int *p = &x;
    
    printf("%d\n", x); // 5
    printf("%u\n", &x); // address of x
    printf("%u\n", p); // address of x
    printf("%u\n", &p); // address of p
    printf("%d\n", *p); // 5

    *p = 10; // x = 10

    printf("%d\n", x); // 10

    return 0;
}