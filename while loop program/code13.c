#include <stdio.h>

int main() {

    /* Get a number from user. 
       If the last digit is even, print the number as it is.
       If the last digit is odd, subtract 1 from the last digit and print the number.
    */

    int num, last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;  // Last digit (MSD)

    if (last_digit % 2 != 0) { // If last digit is odd
        num = num - 1;          // Subtract 1 from last digit
    }

    printf("%d\n", num);

    return 0;
}
