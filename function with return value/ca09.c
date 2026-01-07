// Program to check the last digit and modify the number using while loop
#include <stdio.h>

void check_last_digit_odd()
{
    int num, temp, msb, power = 1;

    scanf("%d", &num);
    temp = num;

    // Find MSB (last digit as per question note)
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    msb = temp;

    // If MSB is odd, subtract 1 from it
    if (msb % 2 != 0)
    {
        num = num - (msb * power);
        msb = msb - 1;
        num = num + (msb * power);
    }

    printf("%d", num);
}

int main()
{
    check_last_digit_odd();
    return 0;
}
