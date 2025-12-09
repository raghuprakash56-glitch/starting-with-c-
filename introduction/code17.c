 // Program: Get a two-digit number and make the ten's digit 1

#include <stdio.h>
int main() {
    int num, ones, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    ones = num % 10;          // extract one's digit
    result = 10 + ones;       // set ten's digit to 1
    printf("Result: %d\n", result);
    return 0;
}
