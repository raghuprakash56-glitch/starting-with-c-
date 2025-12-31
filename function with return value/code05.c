#include <stdio.h>

int count_total_digits(int);

int main()
{
    int x, y;

    scanf("%d", &x);
    y = count_total_digits(x);
    printf("%d", y);

    return 0;
}

int count_total_digits(int a)
{
    int count = 0;

    while (a > 0)
    {
        count++;
        a = a / 10;
    }

    return count;
}
