#include <stdio.h>

int main()
{
    // Write a function to copy a string to another string

    char src[50] = "Hello World";
    char dst[50];

    strcopy(src, dst);

    printf("%s", dst);

    return 0;
}

void strcopy(char *src, char *dst)
{
    while(*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }

    *dst = '\0';
}
