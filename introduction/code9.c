 // C Level 1 – Problem 9: Get a three-digit number and print the hundred’s digit

#include <stdio.h>
int main() {
    int num, hundreds;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    hundreds = num / 100;   // Extracting the hundred's digit
    printf("Hundred's digit: %d\n", hundreds);
    return 0;
}
