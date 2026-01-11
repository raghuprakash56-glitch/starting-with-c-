// Program to adjust carry in an integer array (convert 2-digit numbers to single digits)
#include <stdio.h>

int main()
{
    int a[10], i, n, carry;

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Adjust carry from right to left
    for (i = n - 1; i > 0; i--)
    {
        if (a[i] >= 10)
        {
            carry = a[i] / 10;
            a[i] = a[i] % 10;
            a[i - 1] = a[i - 1] + carry;
        }
    }

    // Print adjusted array
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
