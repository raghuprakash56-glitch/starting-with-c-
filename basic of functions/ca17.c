// Program to check whether a number is prime and sum of digits is equal to 14
#include <stdio.h>

void check_prime_and_sum14(int);

int main()
{
    int x;
    scanf("%d", &x);
    check_prime_and_sum14(x);
    return 0;
}

void check_prime_and_sum14(int x)
{
    int i, flag = 0, sum = 0, temp = x;

    if (x <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    while (temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");
}
