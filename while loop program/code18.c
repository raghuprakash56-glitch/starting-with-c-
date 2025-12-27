/*
    Write a program to print the total number
    of single digit prime numbers.
    */
#include <stdio.h>
int main()
{
    int num = 2;
    int count = 0;
    int i, isPrime;

    while (num <= 9)
    {
        i = 2;
        isPrime = 1;

        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
            i++;
        }

        if (isPrime == 1)
        {
            count++;
        }

        num++;
    }

    printf("Total number of single digit prime numbers = %d", count);

    return 0;
}

