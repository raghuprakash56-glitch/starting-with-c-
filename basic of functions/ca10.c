// Program to print the sum of two-digit odd numbers whose tens digit is 7
#include <stdio.h>

void disp_2digit_odd_sum_tens7(void);

int main()
{
    disp_2digit_odd_sum_tens7();
    return 0;
}

void disp_2digit_odd_sum_tens7(void)
{
    int i, sum = 0;
    for (i = 70; i <= 79; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}
