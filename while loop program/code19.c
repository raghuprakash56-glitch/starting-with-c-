#include <stdio.h>

int main()
{
    /*
    Write a program to get a number from the user
    and print the total number of digits
    which are odd in the given number.
    */

    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total number of odd digits = %d", count);

    return 0;
}
