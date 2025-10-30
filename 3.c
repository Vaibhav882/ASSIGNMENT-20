#include <stdio.h>

void sort(int *ptr, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(ptr + j) < *(ptr + i))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[10], i;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    sort(arr, 10);
    printf("Sorted array:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}
