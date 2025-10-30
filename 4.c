#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of p (address stored): %p\n", p);
    printf("Value pointed by p: %d\n", *p);

    *p = 20;
    printf("After changing *p, value of a: %d\n", a);
    return 0;
}
