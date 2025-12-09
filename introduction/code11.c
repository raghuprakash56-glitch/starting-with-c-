// Get a two-digit number and print the sum of the digits

#include <stdio.h>
int main() {
    int num, tens, ones, sum;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;       // Extract ten's digit
    ones = num % 10;       // Extract one's digit
    sum = tens + ones;     // Sum of digits
    printf("Sum of digits: %d\n", sum);
    return 0;
}