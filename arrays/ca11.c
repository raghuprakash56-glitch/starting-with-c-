// Program to get 5 numbers, reverse each number, store in new array and print the sum
#include <stdio.h>

int main()
{
    int a[5], b[5];
    int i, num, rev, sum = 0;

    // Read 5 numbers from user
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Reverse each number and store in new array
    for (i = 0; i < 5; i++)
    {
        num = a[i];
        rev = 0;

        while (num != 0)
        {
            rev = rev * 10 + (num % 10);
            num = num / 10;
        }

        b[i] = rev;
        sum = sum + b[i];
    }

    // Print the sum of all numbers in new array
    printf("%d", sum);

    return 0;
}
