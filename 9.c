#include <stdio.h>

int main()
{
    int arr[10], *p, i;

    printf("Enter 10 elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    p = arr + 9;
    printf("Array in reverse order:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *p);
        p--;
    }
    return 0;
}
