// Program to print the sum of all digits in a number using while loop
#include <stdio.h>

void disp_sum_all_digits()
{
    int num, digit, sum = 0;

    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("%d", sum);
}

int main()
{
    disp_sum_all_digits();
    return 0;
}
