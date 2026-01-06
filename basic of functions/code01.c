// Function to display numbers from 1 to 5 in ascending order using for loop
#include <stdio.h>

void disp_ascend();
int main()
{
    disp_ascend();
    return 0;
}

void disp_ascend()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
}

