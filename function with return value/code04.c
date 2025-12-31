#include <stdio.h>

int disp_2digit_odd_sum_tens7(int);

int main()
{
    int x, y;

    scanf("%d", &x);
    y = disp_2digit_odd_sum_tens7(x);
    printf("%d", y);

    return 0;
}

int disp_2digit_odd_sum_tens7(int a)
{
    int i = 71, sum = 0;

    while (i <= 79)
    {
        sum = sum + i;
        i = i + 2;
    }

    return sum;
}
