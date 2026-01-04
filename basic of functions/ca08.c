// Program to print two-digit even numbers whose sum of digits is 6
#include <stdio.h>

void disp_2digit_even_sum6(void);

int main()
{
    disp_2digit_even_sum6();
    return 0;
}

void disp_2digit_even_sum6(void)
{
    int i, a, b;
    for (i = 10; i <= 99; i++)
    {
        if (i % 2 == 0)
        {
            a = i / 10; // tens digit
            b = i % 10; // ones digit
            if (a + b == 6)
            {
                printf("%d\n", i);
            }
        }
    }
}
