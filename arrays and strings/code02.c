#include <stdio.h>

int main()
{
    // Pass an integer array to a function and increment each array element inside the function

    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    increment(arr, 5);

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void increment(int *arr, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        *(arr + i) = *(arr + i) + 1;
    }
}
