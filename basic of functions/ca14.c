// Program to interchange the first and last digits of a given number
#include <stdio.h>

void disp_interchange_first_last_digit(int);

int main()
{
    int x;
    scanf("%d", &x);
    disp_interchange_first_last_digit(x);
    return 0;
}

void disp_interchange_first_last_digit(int x)
{
    int last, first, temp, pow = 1, result;

    last = x % 10; // last digit
    temp = x;

    while (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
    }

    first = temp; // first digit

    result = last * pow + (x % pow) / 10 * 10 + first;
    printf("%d", result);
}
