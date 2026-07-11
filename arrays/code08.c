// Program to get 5 numbers, remove odd numbers, create a new array and print it
#include <stdio.h>

int main()
{
    int a[5], b[5], i, j = 0;

    // Read 5 numbers from user
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Remove odd numbers and store even numbers in new array
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    // Print new array
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
