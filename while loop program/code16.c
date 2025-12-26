#include <stdio.h>

int main()
{
    /*
    Write a program to get a number from the user and
    check whether the first two digits (ten's digit and one's digit)
    of the given number form a prime number.

    Example:
    Input: 359
    Output: Prime

    Input: 3577
    Output: Not Prime
    */

    int num, lastTwo, i = 2, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Extract ten's and one's digits */
    lastTwo = num % 100;

    /* Prime checking using while loop */
    if (lastTwo <= 1)
    {
        isPrime = 0;
    }
    else
    {
        while (i <= lastTwo / 2)
        {
            if (lastTwo % i == 0)
            {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    /* Output result */
    if (isPrime == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}
