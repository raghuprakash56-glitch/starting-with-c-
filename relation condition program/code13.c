// Program: Check if digit 1 and digit 0 are the same

#include <stdio.h>

int main() {
    int num, d0, d1;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Extract digit0 (last digit) and digit1 (second last digit)
    d0 = num % 10;          // digit 0
    d1 = (num / 10) % 10;   // digit 1

    // Check condition
    if (d1 == d0) {
        printf("Success");
    } else {
        printf("Failure");
    }

    return 0;
}
