// Program to print total number of single-digit prime numbers using function and while loop
#include <stdio.h>

void disp_2digit_even_sum6()
{
    int i = 2, j, flag, count = 0;

    while (i <= 9)
    {
        j = 2;
        flag = 1;

        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            j++;
        }

        if (flag == 1)
            count++;

        i++;
    }

    printf("%d", count);
}

int main()
{
    disp_2digit_even_sum6();
    return 0;
}
