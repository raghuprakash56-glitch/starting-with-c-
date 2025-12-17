#include <stdio.h>
int main()
{
    int i, sum, a, b;

    for (i = 10; i <= 99; i++)
    {
        a = i / 10;
        b = i % 10;
        sum = a + b;
        if (i % 2 != 0 && sum == 7)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
