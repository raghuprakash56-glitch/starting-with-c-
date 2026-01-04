// Function to display sum of numbers from 1 to 5 using for loop
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
    for (i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}
