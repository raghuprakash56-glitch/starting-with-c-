// Program to get multiple numbers, store in array until 0 is entered, then print count and sum
#include <stdio.h>

int main()
{
    int a[100], num, i = 0, sum = 0;

    // Read numbers until user enters 0
    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        a[i] = num;
        sum = sum + num;
        i++;
    }

    // Print total numbers entered and sum
    printf("%d\n", i);
    printf("%d", sum);

    return 0;
}
