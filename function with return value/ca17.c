// Program to print the total count of numbers less than 100000 whose sum of digits is 14 using for loop
#include <stdio.h>

void disp_count_sum14()
{
    int num, temp, sum, count = 0;

    for (num = 1; num < 100000; num++)
    {
        temp = num;
        sum = 0;

        while (temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if (sum == 14)
            count++;
    }

    printf("%d", count);
}

int main()
{
    disp_count_sum14();
    return 0;
}
