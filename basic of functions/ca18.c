// Program to check whether the first two digits (tens and ones) are prime
#include <stdio.h>

void check_first_2digits_prime(int);

int main()
{
    int x;
    scanf("%d", &x);
    check_first_2digits_prime(x);
    return 0;
}

void check_first_2digits_prime(int x)
{
    int n, i, flag = 0;

    n = x % 100; // extract first two digits (tens and ones from right)

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
