#include <stdio.h>

int main()
{
    /*
    Write a program to print the total count of numbers
    which are less than 100000 and whose sum of digits is 14.
    */

    int num = 1, temp, digit;
    int sum, count = 0;

    while (num < 100000)
    {
        temp = num;
        sum = 0;

        /* Calculate sum of digits */
        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }

        num++;
    }

    printf("Total count = %d", count);

    return 0;
}
