// Program to interchange the first and last digits of a number using while loop
#include <stdio.h>

void disp_interchange_first_last_digit()
{
    int num, temp, first, last, power = 1;

    scanf("%d", &num);
    temp = num;

    last = num % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    num = num - (first * power);
    num = num - last;
    num = num + (last * power);
    num = num + first;

    printf("%d", num);
}

int main()
{
    disp_interchange_first_last_digit();
    return 0;
}
