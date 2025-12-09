 // Subtract 5 only if the ten's digit is odd, without using if

#include <stdio.h>
int main() {
    int num, tens, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    tens = (num / 10) % 10;          // extract tens digit
    result = num - 5 * (tens % 2);    // subtract 5 only if tens digit is odd
    printf("Result: %d\n", result);
    return 0;
}
