// Program to print two-digit odd numbers below 20
#include <stdio.h>

void disp_2digit_odd_below20();

int main()
{
    disp_2digit_odd_below20();
    return 0;
}

void disp_2digit_odd_below20()
{
    int i;
    for (i = 11; i < 20; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}
