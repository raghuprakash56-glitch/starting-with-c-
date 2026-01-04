// Program to print the reverse of a given number
#include <stdio.h>

void disp_reverse_number(int);

int main()
{
    int x;
    scanf("%d", &x);
    disp_reverse_number(x);
    return 0;
}

void disp_reverse_number(int x)
{
    int rev = 0;
    while (x != 0)
    {
        rev = (rev * 10) + (x % 10);
        x = x / 10;
    }
    printf("%d", rev);
}
