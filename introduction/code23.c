// Program: Subtract 5 only if both one's and hundred's digits are odd (no if)
#include <stdio.h>
int main() {
        int num, ones, hundreds, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    hundreds = num / 100;       // Extract hundreds digit
    ones = num % 10;            // Extract ones digit
    result = num - 5 * ((ones % 2) * (hundreds % 2));
    printf("Result: %d\n", result);
    return 0;
}
