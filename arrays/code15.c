// Program to store numbers until 0, sum digits of each number, store in new array,
// arrange the new array in ascending order and print
#include <stdio.h>

int main()
{
    int a[100], b[100];
    int num, i = 0, j, k, temp, sum, count = 0;

    // Get numbers from user until 0 is entered
    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        a[i] = num;
        i++;
    }

    count = i;

    // Add digits of each number and store in new array
    for (i = 0; i < count; i++)
    {
        num = a[i];
        sum = 0;

        while (num != 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        b[i] = sum;
    }

    // Arrange new array in ascending order
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // Print the new array
    for (i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
