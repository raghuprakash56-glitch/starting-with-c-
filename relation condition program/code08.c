#include <stdio.h>

int main() {
    // Program to Check if Digit 0 and Digit 1 of a Two-Digit Number Are NOT Identical
    int num;
    int d1, d0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    d0 = num % 10;      // digit 0 (ones place)
    d1 = num / 10;      // digit 1 (tens place)

    if (d0 != d1) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}
