/*
    Write a program to get a number from the user
    and print the total number of single-digit
    prime numbers in the given number.
    */
#include <stdio.h>
int main()
{
    int num, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        /* Single digit prime numbers: 2, 3, 5, 7 */
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total number of single digit prime numbers = %d", count);

    return 0;
}

