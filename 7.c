#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100], *p;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    p = str;
    while (*p != '\0')
    {
        char ch = tolower(*p);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        p++;
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
