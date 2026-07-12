// Program to get 5 numbers, remove prime numbers, create a new array and print it
#include <stdio.h>

int main()
{
    int a[5], b[5], i, j = 0, k, flag;

    // Read 5 numbers from user
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Remove prime numbers and store non-prime numbers in new array
    for (i = 0; i < 5; i++)
    {
        if (a[i] <= 1)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            flag = 1;

            for (k = 2; k <= a[i] / 2; k++)
            {
                if (a[i] % k == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 0)
            {
                b[j] = a[i];
                j++;
            }
        }
    }

    // Print new array (non-prime numbers)
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
