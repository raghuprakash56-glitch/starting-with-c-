#include <stdio.h>

int main()
{
    // Get a number from the user and change its value using pointers
    // without directly modifying the variable and print the result

    int num;
    int *ptr;

    scanf("%d", &num);

    ptr = &num;

    *ptr = *ptr + 10;

    printf("%d", *ptr);

    return 0;
}
