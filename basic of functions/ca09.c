// Program to print the sum of two-digit numbers whose ones digit is 5
#include <stdio.h>

void disp_2digit_ones5();

int main()
{
    disp_2digit_ones5();
    return 0;
}

void disp_2digit_ones5()
{
    int i, sum = 0;
    for (i = 10; i <= 99; i++)
    {
        if (i % 10 == 5)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}
