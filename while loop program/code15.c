#include <stdio.h>

int main()
{
    int num, temp, sum = 0;
    int i = 2, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Check prime */
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    /* Sum of digits */
    temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    /* Output */
    if (isPrime == 1 && sum == 14)
    {
        printf("Prime & Sum of digits is 14");
    }
    else
    {
        printf("Condition not satisfied");
    }

    return 0;
}
