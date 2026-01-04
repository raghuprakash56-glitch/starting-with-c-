#include <stdio.h>

int main()
{
    // Write a function to concatenate two strings into another string

    char src1[50] = "Hello ";
    char src2[50] = "World";
    char dst[100];

    strcon(src1, src2, dst);

    printf("%s", dst);

    return 0;
}

void strcon(char *src1, char *src2, char *dst)
{
    while(*src1 != '\0')
    {
        *dst = *src1;
        src1++;
        dst++;
    }

    while(*src2 != '\0')
    {
        *dst = *src2;
        src2++;
        dst++;
    }

    *dst = '\0';
}
