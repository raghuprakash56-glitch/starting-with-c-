// Program to count total number of digits in a given number
#include <stdio.h>

void count_total_digits(int);

int main()
{
    int x;
    scanf("%d", &x);
    count_total_digits(x);
    return 0;
}

void count_total_digits(int x)
{
    int count = 0;
    while (x != 0)
    {
        count++;
        x = x / 10;
    }
    printf("%d", count);
}
