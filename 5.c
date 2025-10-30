#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    if (*p1 > *p2)
        printf("%d is maximum.\n", *p1);
    else
        printf("%d is maximum.\n", *p2);

    return 0;
}
