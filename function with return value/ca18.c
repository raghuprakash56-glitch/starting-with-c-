// Program to get two numbers from user and print their LCM using while loop
#include <stdio.h>

void disp_LCM2()
{
    int a, b, max;

    scanf("%d %d", &a, &b);

    if (a > b)
        max = a;
    else
        max = b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("%d", max);
            break;
        }
        max++;
    }
}

int main()
{
    disp_LCM2();
    return 0;
}
