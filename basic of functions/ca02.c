// Function to display numbers from 5 to 1 in descending order using for loop
#include <stdio.h>

void disp_descend();
int main()
{
    disp_descend();
    return 0;
}

void disp_descend()
{
    int i;
    for (i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}
