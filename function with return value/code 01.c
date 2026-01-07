#include <stdio.h>

int disp_sum(int);

int main()
{
    int x, y;

    scanf("%d", &x);
    y = disp_sum(x);
    printf("%d", y);

    return 0;
}

int disp_sum(int a)
{
    int i = 1, sum = 0;

    while (i <= 5)
    {
        sum = sum + i;
        i++;
    }

    return sum;
}
