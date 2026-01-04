#include <stdio.h>

int main()
{
    // Write a function to copy integers from one location to another location

    int src[5] = {10, 20, 30, 40, 50};
    int dst[5];
    int i;

    memcpy(src, dst, 5);

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(dst + i));
    }

    return 0;
}

void memcpy(int *src, int *dst, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        *(dst + i) = *(src + i);
    }
}
