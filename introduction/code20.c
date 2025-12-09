// Program: Get a three-digit number and make the ten's digit 0

#include <stdio.h>
int main() {
    int num, hundreds, ones, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    hundreds = num / 100;        // Extract hundred's digit
    ones = num % 10;             // Extract one's digit
    result = (hundreds * 100) + (0 * 10) + ones;   // Make tens digit 0
    printf("Result: %d\n", result);
    return 0;
}
