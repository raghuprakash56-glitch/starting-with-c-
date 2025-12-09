
  // Program: Get a two-digit number and make the one's digit 0

#include <stdio.h>
int main() {
    int num, tens, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;          // Get the ten's digit
    result = tens * 10;       // Make the one's digit 0
    printf("Result: %d\n", result);
    return 0;
}