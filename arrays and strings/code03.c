#include <stdio.h>

int main()
{
    // Write a loop program to print 1 to 5 one by one using a function named arrange
    // and print the result in the main function

    int arr[5];
    int i;

    arrange(arr, 5);

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}

void arrange(int *arr, int n)
{
    int i;
    int value = 1;

    for(i = 0; i < n; i++)
    {
        *(arr + i) = value;
        value++;
    }
}
