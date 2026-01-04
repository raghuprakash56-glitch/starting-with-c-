// Function to display sum of numbers from 6 to 1 using for loop
#include <stdio.h>

void disp_sum();
int main()
{
    disp_sum();
    return 0;
}

void disp_sum()
{
    int i, sum = 0;
    for (i = 6; i >= 1; i--)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}