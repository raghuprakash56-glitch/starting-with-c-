#include <stdio.h>

int main()
{
    // Write a function to find the two-digit odd numbers whose sum of digits is 7 and print the results in main function

    int arr[10];
    int count = 0;
    int i;

    find_2digit_odd_sum7(arr, &count);

    for(i = 0; i < count; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}

void find_2digit_odd_sum7(int *arr, int *count)
{
    int num;
    int tens, ones;

    for(num = 11; num <= 99; num += 2)
    {
        tens = num / 10;
        ones = num % 10;

        if(tens + ones == 7)
        {
            *(arr + *count) = num;
            (*count)++;
        }
    }
}
