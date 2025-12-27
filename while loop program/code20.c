 /*
    Write a program to get a number from the user
    and print the total number of single digit
    perfect square numbers in the given number.
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

        /* Single digit perfect squares: 1, 4, 9 */
        if (digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total number of single digit perfect square numbers = %d", count);

    return 0;
}

