#include <stdio.h>

int main()
{
    /*
    Write a program to get a 4-digit number from the user
    and print whether the number's middle two digits
    (hundred's digit and ten's digit) is prime.

    Example:
    Input : 6359
    Output: Not Prime

    Input : 3537
    Output: Prime
    */

    int num, middleTwo;
    int i = 2, isPrime = 1;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    /* Extract middle two digits */
    middleTwo = (num / 10) % 100;

    /* Check prime using while loop */
    if (middleTwo <= 1)
    {
        isPrime = 0;
    }
    else
    {
        while (i <= middleTwo / 2)
        {
            if (middleTwo % i == 0)
            {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    /* Print result */
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
