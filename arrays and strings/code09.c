#include <stdio.h>

int main()
{
    // Write a function to concatenate two integer arrays into a single array

    int src1[3] = {1, 2, 3};
    int src2[3] = {4, 5, 6};
    int dst[6];
    int i;

    intcon(src1, 3, src2, 3, dst);

    for(i = 0; i < 6; i++)
    {
        printf("%d ", *(dst + i));
    }

    return 0;
}

void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i;

    for(i = 0; i < size1; i++)
    {
        *(dst + i) = *(src1 + i);
    }

    for(i = 0; i < size2; i++)
    {
        *(dst + size1 + i) = *(src2 + i);
    }
}
