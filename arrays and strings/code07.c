#include <stdio.h>

int main()
{
    // Write a function to compare a set of integers and print success or failure

    int src[5] = {10, 20, 30, 40, 50};
    int dst[5] = {10, 20, 30, 40, 50};
    int size = 5;

    memcomp(src, dst, size);

    return 0;
}

void memcomp(int *src, int *dst, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(*(src + i) != *(dst + i))
        {
            printf("Failure");
            return;
        }
    }

    printf("Success");
}
