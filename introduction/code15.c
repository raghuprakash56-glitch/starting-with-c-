// Program: Get a four-digit number and reverse only the first two digits

#include <stdio.h>
int main() {
    int num, d1, d2, d3, d4, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    d1 = num / 1000;         // thousand's digit
    d2 = (num / 100) % 10;   // hundred's digit
    d3 = (num / 10) % 10;    // ten's digit
    d4 = num % 10;           // one's digit
    result = (d2 * 1000) + (d1 * 100) + (d3 * 10) + d4;
    printf("Result: %d\n", result);
    return 0;
}
