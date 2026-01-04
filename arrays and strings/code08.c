#include <stdio.h>

int main()
{
    // Write a function to compare two strings and print success or failure

    char src[50] = "HELLO";
    char dst[50] = "HELLO";

    strcomp(src, dst);

    return 0;
}

void strcomp(char *src, char *dst)
{
    while(*src != '\0' && *dst != '\0')
    {
        if(*src != *dst)
        {
            printf("Failure");
            return;
        }

        src++;
        dst++;
    }

    if(*src == '\0' && *dst == '\0')
        printf("Success");
    else
        printf("Failure");
}
