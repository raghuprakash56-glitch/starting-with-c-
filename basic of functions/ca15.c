// Program to check last digit and modify MSB if last digit is odd
#include <stdio.h>

void check_last_digit_odd(int);

int main()
{
    int x;
    scanf("%d", &x);
    check_last_digit_odd(x);
    return 0;
}

void check_last_digit_odd(int x)
{
    int last, first, temp, pow = 1, result;

    last = x % 10; // last digit (LSB)
    temp = x;

    while (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
    }

    first = temp; // first digit (MSB)

    if (last % 2 != 0) // if last digit is odd
    {
        first = first - 1;
    }

    result = first * pow + (x % pow);
    printf("%d", result);
}
