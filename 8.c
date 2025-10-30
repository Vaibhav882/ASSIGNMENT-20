#include <stdio.h>

int main()
{
    int arr[10], *p, i, sum = 0;

    printf("Enter 10 elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    p = arr;
    for (i = 0; i < 10; i++)
        sum += *(p + i);

    printf("Sum of elements = %d\n", sum);
    return 0;
}
