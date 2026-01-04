// Program to print two-digit odd numbers whose sum of digits is 7
#include <stdio.h>

void disp_2digit_odd_sum7(void);

int main()
{
    disp_2digit_odd_sum7();
    return 0;
}

void disp_2digit_odd_sum7()
{
    int i, a, b;
    for (i = 11; i <= 99; i++)
    {
        if (i % 2 != 0)
        {
            a = i / 10; // tens digit
            b = i % 10; // ones digit
            if (a + b == 7)
            {
                printf("\n%d ", i);
            }
        }
    }
}
