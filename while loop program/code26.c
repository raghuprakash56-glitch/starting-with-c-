#include <stdio.h>

int main()
{
    /*
    Write a program to get two numbers from the user
    and print the HCF of those numbers.
    */

    int a, b, hcf = 1;
    int i = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /* Find HCF using while loop */
    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
        i++;
    }

    printf("HCF = %d", hcf);

    return 0;
}
