#include <stdio.h>

int main() {
    // Program to Check if Digit 0 and Digit 1 of a Two-Digit Number Are Identical
    int num;
    int d1, d0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    d0 = num % 10;      // last digit
    d1 = num / 10;      // first digit

    if (d0 == d1) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}
