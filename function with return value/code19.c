// Program to get three numbers from user and print their LCM using while loop
#include <stdio.h>

void disp_LCM3()
{
    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    while (1)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            printf("%d", max);
            break;
        }
        max++;
    }
}

int main()
{
    disp_LCM3();
    return 0;
}
