// Program to check whether a given number is prime or not
#include <stdio.h>

void check_prime(int);

int main()
{
    int x;
    scanf("%d", &x);
    check_prime(x);
    return 0;
}

void check_prime(int x)
{
    int i, flag = 0;

    if (x <= 1)
    {
        printf("Not Prime");
        return;
    }

    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
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
