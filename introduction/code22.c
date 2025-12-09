// Program: Subtract 5 if sum of digits is odd, without using if

#include <stdio.h>
int main() {
    int num, tens, ones, sum, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;          // Extract ten's digit
    ones = num % 10;          // Extract one's digit
    sum = tens + ones;        // Sum of digits
    result = num - 5 * (sum % 2);   // Subtract 5 only if sum is odd
    printf("Result: %d\n", result);
    return 0;
}
