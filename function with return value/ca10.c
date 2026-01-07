// Program to print total number of single-digit prime numbers using for loop
#include <stdio.h>

void disp_2digit_even_sum6()
{
    int i, j, flag, count = 0;

    for (i = 2; i <= 9; i++)
    {
        flag = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            count++;
    }

    printf("%d", count);
}

int main()
{
    disp_2digit_even_sum6();
    return 0;
}
