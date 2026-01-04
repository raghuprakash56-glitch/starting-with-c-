// Program to check whether the middle two digits of a 4-digit number are prime
#include <stdio.h>

void middle_2digits_prime(int);

int main()
{
    int x;
    scanf("%d", &x);
    middle_2digits_prime(x);
    return 0;
}

void middle_2digits_prime(int x)
{
    int n, i, flag = 0;

    n = (x / 10) % 100; // extract middle two digits (hundreds & tens)

    if (n <= 1)
    {
        printf("Not Prime");
        return;
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}
