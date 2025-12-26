#include <stdio.h>

int main()
{
    /*
    Write a program to print the biggest 4-digit number
    which is divisible by 7 and 9.
    */

    int num = 9999;

    while (num >= 1000)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            printf("Biggest 4-digit number divisible by 7 and 9 is %d", num);
            break;
        }
        num--;
    }

    return 0;
}
