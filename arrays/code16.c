// Program to add two integer arrays (up to 50 digits each) and store result in 51-digit array
#include <stdio.h>

int main()
{
    int a[50], b[50], c[51];
    int i, n1, n2, carry = 0, sum, max;

    // Read number of digits of first number
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    // Read number of digits of second number
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Decide maximum length
    if (n1 > n2)
        max = n1;
    else
        max = n2;

    // Add digits from right to left
    for (i = 0; i < max; i++)
    {
        sum = carry;

        if (i < n1)
            sum = sum + a[n1 - 1 - i];

        if (i < n2)
            sum = sum + b[n2 - 1 - i];

        c[max - i] = sum % 10;
        carry = sum / 10;
    }

    // Store final carry
    c[0] = carry;

    // Print result
    if (c[0] != 0)
        printf("%d", c[0]);

    for (i = 1; i <= max; i++)
    {
        printf("%d", c[i]);
    }

    return 0;
}
