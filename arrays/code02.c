// Program to get 5 numbers from user and print the avg of all numbers using array and for loop
#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    printf("%d", sum / 5);

    return 0;
}
