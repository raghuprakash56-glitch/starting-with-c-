// Function to display odd numbers from 1 - 9 using for loop
#include <stdio.h>

void disp_odd();

int main()
{
    disp_odd();
    return 0;
}

void disp_odd()
{
    // Print odd numbers between 1 and 9 using for loop
    int i;
    for (i = 1; i <= 9; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}
