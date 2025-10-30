#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], *p;
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    p = str + len - 1;

    printf("Reversed string: ");
    while (p >= str)
    {
        printf("%c", *p);
        p--;
    }
    return 0;
}
