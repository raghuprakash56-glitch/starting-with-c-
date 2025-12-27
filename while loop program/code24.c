/*
    Write a program to get two numbers from the user
    and print the LCM of those numbers.
    */
#include <stdio.h>
int main()
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /* Find maximum of a and b */
    if (a > b)
        max = a;
    else
        max = b;

    /* Find LCM using while loop */
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }

    return 0;
}

