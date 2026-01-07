// Program to store numbers until 0 is entered and check first & last equality condition
#include <stdio.h>

int main()
{
    int a[100];
    int num, count = 0;

    // Get numbers from user until 0 is entered
    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        a[count] = num;
        count++;
    }

    // Check condition: exactly 4 numbers and first == last
    if (count == 4 && a[0] == a[count - 1])
        printf("Success");
    else
        printf("Failure");

    return 0;
}
