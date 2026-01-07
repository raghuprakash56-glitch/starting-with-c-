// Program to get two numbers from user and print their HCF using while loop
#include <stdio.h>

void disp_count_HCF2()
{
    int a, b, hcf;

    scanf("%d %d", &a, &b);

    if (a < b)
        hcf = a;
    else
        hcf = b;

    while (hcf >= 1)
    {
        if (a % hcf == 0 && b % hcf == 0)
        {
            printf("%d", hcf);
            break;
        }
        hcf--;
    }
}

int main()
{
    disp_count_HCF2();
    return 0;
}
