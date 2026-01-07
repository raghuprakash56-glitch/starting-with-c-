// Program to get 5 numbers from user, arrange them in descending order and print the same
#include <stdio.h>

int main()
{
    int a[5], i, j, temp;

    // Read 5 numbers
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Arrange in descending order
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print sorted numbers
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
