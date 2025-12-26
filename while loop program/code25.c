#include <stdio.h>

int main()
{
    /*
    Write a program to get three numbers from the user
    and print the LCM of those numbers.
    */

    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Find the maximum of three numbers */
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    /* Find LCM using while loop */
    while (1)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }

    return 0;
}
